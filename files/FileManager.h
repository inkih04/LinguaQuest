#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QString>
#include <QList>
#include <QPair>

class FileManager {
public:
    FileManager(const QString& filePath);
    bool writeToFile(const QString& content);
    QString readFromFile();
    bool appendToFile(const QString& content);
    QList<QPair<QString, QString>> parseWords();
    QString showFilePath();
    static QList<QPair<QString, QString>> readFilesFromDirectory(const QString& directoryPath);

    bool formato_incorrecto = false;

private:
    QString filePath;
};

#endif // FILEMANAGER_H
