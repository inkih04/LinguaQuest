#include "FileManager.h"
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QStringList>
#include <QMessageBox>

FileManager::FileManager(const QString& filePath) : filePath(filePath) {}

bool FileManager::writeToFile(const QString& content) {
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Could not open file for writing:" << filePath;
        return false;
    }
    
    QTextStream out(&file);
    out << content;
    file.close();
    return true;
}

QString FileManager::readFromFile() {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Could not open file for reading:" << filePath;
        return QString();
    }
    
    QTextStream in(&file);
    QString content = in.readAll();
    file.close();
    return content;
}

bool FileManager::appendToFile(const QString& content) {
    QFile file(filePath);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qWarning() << "Could not open file for appending:" << filePath;
        return false;
    }
    
    QTextStream out(&file);
    out << content;
    file.close();
    return true;
}

QList<QPair<QString, QString>> FileManager::parseWords() {
    QString content = readFromFile();
    QList<QPair<QString, QString>> wordPairs;
    
    if (content.isEmpty()) {
        return wordPairs;
    }
    
    QStringList pairs = content.split(';', Qt::SkipEmptyParts);
    for (const QString& pair : pairs) {
        QStringList words = pair.split('-');
        if (words.size() == 2) {
            QString first = words[0].trimmed();
            QString second = words[1].trimmed();
            if (!first.isEmpty() && !second.isEmpty()) {
                wordPairs.append(qMakePair(first, second));
            } else {
                QMessageBox::warning(nullptr, "Format Error", "Empty word or translation found in pair: \"" + pair + "\". The correct format is \"word-translation;\"");
                return QList<QPair<QString, QString>>();
            }
        } else {
            formato_incorrecto = true;
            QMessageBox::warning(nullptr, "Format Error", "The input format is incorrect in pair: \"" + pair + "\". The correct format is \"word-translation;\"");
            return QList<QPair<QString, QString>>();
        }
    }
    
    return wordPairs;
}

QString FileManager::showFilePath() {
    return filePath;
}

QList<QPair<QString, QString>> FileManager::readFilesFromDirectory(const QString& directoryPath) {
    QList<QPair<QString, QString>> documentosVocabulario;

    QDir directory(directoryPath);
    QStringList files = directory.entryList(QStringList() << "*.txt", QDir::Files);

    foreach(QString filename, files) {
        QString fullPath = directory.absoluteFilePath(filename);
        QString baseName = QFileInfo(filename).baseName();
        documentosVocabulario.append(qMakePair(baseName, fullPath));
    }

    return documentosVocabulario;
}
