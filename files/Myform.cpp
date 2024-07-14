#include "MyForm.h"
#include "FileManager.cpp"

MyForm::MyForm(QMainWindow* parent) : QMainWindow(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
    ui.setupUi(this);
    mousePressed = false;
    resizing = false;
    allowMove = false;
    maximizedByDrag = false; // Nueva variable para manejar el estado maximizado
    lastGeometryBeforeMaximize = geometry();

    ui.stackedWidgetOpciones->setCurrentIndex(1);
    index_stackedWidget = 1;

    aciertos = 0;
    fallos = 0;
    indicesRepetidos.clear();

    ui.label_aciertos->hide();
    ui.aciertos_numero->hide();
    ui.label_fallos->hide();
    ui.fallos_numero->hide();

    ui.boton_vocabulario1->hide();
    ui.boton_vocabulario2->hide();
    ui.boton_vocabulario3->hide();
    ui.boton_vocabulario4->hide();
    ui.boton_vocabulario5->hide();

    ui.aciertos_numero->setText(QString::number(aciertos));
    ui.fallos_numero->setText(QString::number(fallos));

    ui.boton_Contraer->hide();
    ui.boton_volver->hide();
    ui.botonExpandirMenu->hide();
    ui.boton_modo->hide();

    index_vocabulario = 0;

    cargarPaths();
    if (documentosVocabulario.size() > 0) loadGame();
    else {
        qWarning() << "No hay ningún documento con vocabulario valido";
        control_bt_vocabulario();
    }
    index_lista = generarRandom();
    
    
    connect(ui.boton_Expandir, &QPushButton::clicked, this, &MyForm::control_bt_maximizar);
    connect(ui.boton_Contraer, &QPushButton::clicked, this, &MyForm::control_bt_contraer);
    connect(ui.botonContraerMenu, &QPushButton::clicked, this, &MyForm::control_bt_contraer_menu);
    connect(ui.botonExpandirMenu, &QPushButton::clicked, this, &MyForm::control_bt_expandir_menu);
    connect(ui.boton_aprender, &QPushButton::clicked, this, &MyForm::control_bt_aprender);
    connect(ui.boton_start, &QPushButton::clicked, this, &MyForm::control_bt_start);
    connect(ui.boton_reset, &QPushButton::clicked, this, &MyForm::control_bt_reset);
    connect(ui.boton_modo, &QPushButton::clicked, this, &MyForm::control_bt_modo); //?El boton modo y start son practicamente lo mismo despues del primer uso
    connect(ui.entrada_texto, &QLineEdit::returnPressed, this, &MyForm::control_entrada_texto);
    connect(ui.boton_vocabulario, &QPushButton::clicked, this, &MyForm::control_bt_vocabulario);
    connect(ui.boton_volver, &QPushButton::clicked, this, &MyForm::control_bt_volver);
    connect(ui.boton_vocabulario1, &QRadioButton::clicked, this, &MyForm::control_bt_radio1);
    connect(ui.boton_vocabulario2, &QRadioButton::clicked, this, &MyForm::control_bt_radio2);
    connect(ui.boton_vocabulario3, &QRadioButton::clicked, this, &MyForm::control_bt_radio3);
    connect(ui.boton_vocabulario4, &QRadioButton::clicked, this, &MyForm::control_bt_radio4);
    connect(ui.boton_vocabulario5, &QRadioButton::clicked, this, &MyForm::control_bt_radio5);
}

void MyForm::cargarPixMap() {
    QString path = QString("./imagenesVocabulario/") + wordPairs.at(index_lista).first; 
    qWarning() << "Path de la imagen" << path;
    QPixmap imagen(path); 

    if (imagen.isNull()) {
        ui.foto->setText("Imagen no encontrada");
        qWarning() << "Imagen en " << path << " no he encontrada";
    }
    else {
        qWarning() << "Imagen cargada con exito";
        ui.foto->setPixmap(imagen);
    }
}

void MyForm::prepararJuego() {
    if (wordPairs.size() > 0) {
        if (modo == 0 || modo == 1) {
            index_lista = generarRandom();
            ui.texto_a_traducir->setText(wordPairs.at(index_lista).second);
        }
        else if (modo == 2) {
            index_lista = generarRandom();
            ui.texto_a_traducir->setText(wordPairs.at(index_lista).first);
        } 
    }
}


void MyForm::loadGame() {
    FileManager fileManager(documentosVocabulario.at(index_vocabulario).second);
    wordPairs = fileManager.parseWords();
    
    if (fileManager.formato_incorrecto) {
        qWarning() << "El archivo " << documentosVocabulario.at(index_vocabulario).first << 
        " no se encuentra en un formato adecuado probablemente cause errores"<< fileManager.showFilePath();
        control_bt_vocabulario();
        ui.boton_modo->hide();
        ui.boton_aprender->hide();
        ui.boton_volver->hide();
    }
    else if (wordPairs.isEmpty()) {
        qWarning() << "Las palabras no se han cargado correctamente " << fileManager.showFilePath();
        control_bt_vocabulario();
        ui.boton_modo->hide();
        ui.boton_aprender->hide();
        ui.boton_volver->hide();
    }
    else {
        qWarning() << "Archivo " << documentosVocabulario.at(index_vocabulario).first<< " en " << fileManager.showFilePath() << " cargado con exito";
    }
}

void MyForm::cargarPaths() {
    FileManager directoryManager("./vocabulario");
    documentosVocabulario = directoryManager.readFilesFromDirectory("./vocabulario");
    // Imprimir los resultados
    qDebug() << "Archivos en la carpeta ./vocabulario";
    for (int i = 0; i < documentosVocabulario.size(); ++i) {
        qDebug() << "       Nombre del archivo:" << documentosVocabulario.at(i).first << ", Ubicación:" << documentosVocabulario.at(i).second ;
    }
}

void MyForm::controlJuego(const QString& guess) {
    if (modo == 0) {
        if (wordPairs.at(index_lista).first == guess) {
            ++aciertos;
            qWarning() << "Acierto \nNumero aciertos = " << aciertos;
            index_lista = generarRandom();
            qWarning() << "Número en la lista " << index_lista;
            ui.texto_a_traducir->setText(wordPairs.at(index_lista).second);
            ui.aciertos_numero->setText(QString::number(aciertos));
        } 
        else {
            qWarning() << "Fallo";
            qWarning() << "Número en la lista " << index_lista+1;
            ++fallos;
            ui.fallos_numero->setText(QString::number(fallos));
        }
    }
    else if (modo == 1) {
        if (wordPairs.at(index_lista).first == guess) {
            ++aciertos;
            qWarning() << "Acierto \nNumero aciertos = " << aciertos;
            index_lista = generarRandom();
            qWarning() << "Número en la lista " << index_lista +1;
            cargarPixMap();
            ui.aciertos_numero->setText(QString::number(aciertos));
        } 
        else {
            qWarning() << "Fallo";
            qWarning() << "Número en la lista " << index_lista;
            ++fallos;
            ui.fallos_numero->setText(QString::number(fallos));
        }
    }
    else if (modo == 2) {
        if (wordPairs.at(index_lista).second == guess) {
            ++aciertos;
            ui.aciertos_numero->setText(QString::number(aciertos));
            qWarning() << "Acierto \nNumero aciertos = " << aciertos;
            index_lista = generarRandom();
            qWarning() << "Número en la lista " << index_lista+1;
            ui.texto_a_traducir->setText(wordPairs.at(index_lista).first);
        } 
        else {
            qWarning() << "Fallo";
            qWarning() << "Número en la lista " << index_lista+1;
            ++fallos;
            ui.fallos_numero->setText(QString::number(fallos));
        }
    } 
}


int MyForm::generarRandom() {
    int size = wordPairs.size();
    if (size == int(indicesRepetidos.size())) {
        indicesRepetidos.clear();
        qWarning() << "Vocabulario completado";
    }
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(0, size - 1);
    int index_lista = dist(rng);
    
    while (indicesRepetidos.find(index_lista) != indicesRepetidos.end()) index_lista = dist(rng);
    indicesRepetidos.insert(index_lista);

    return index_lista;
}




//!Control de eventos de raton

void MyForm::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePos = event->globalPos() - frameGeometry().topLeft();
        lastMousePos = event->globalPos();
        lastGeometry = geometry();

        if (ui.frameSuperior->rect().contains(ui.frameSuperior->mapFromGlobal(event->globalPos()))) {
            allowMove = true;
        } else {
            allowMove = false;
        }

        if ((event->pos().x() >= width() - 10 && event->pos().y() >= height() - 10) || event->pos().x() >= width() - 10) {
            resizing = true;
        } else {
            resizing = false;
        }
        event->accept();
    }
}

void MyForm::mouseMoveEvent(QMouseEvent *event)
{
    if (mousePressed && (event->buttons() & Qt::LeftButton)) {
        if (resizing) {
            int newWidth = lastGeometry.width() + (event->globalX() - lastMousePos.x());
            int newHeight = lastGeometry.height() + (event->globalY() - lastMousePos.y());

            newWidth = qMax(newWidth, minimumWidth());
            newHeight = qMax(newHeight, minimumHeight());

            resize(newWidth, newHeight);
        } else if (allowMove) {
            if (maximizedByDrag) {
                // Restaurar la ventana cuando se arrastra hacia abajo
                if (event->globalPos().y() > 50) {
                    ui.boton_Contraer->hide();
                    ui.boton_Expandir->show();
                    setWindowState(Qt::WindowNoState);
                    setGeometry(lastGeometryBeforeMaximize);
                    maximizedByDrag = false;
                    mousePos = event->globalPos() - frameGeometry().topLeft();
                }
            } else {
                move(event->globalPos() - mousePos);

                // Maximizar la ventana cuando se arrastra hacia la parte superior de la pantalla
                if (event->globalPos().y() <= 0) {
                    ui.boton_Contraer->show();
                    ui.boton_Expandir->hide();
                    lastGeometryBeforeMaximize = geometry();
                    setWindowState(Qt::WindowMaximized);
                    maximizedByDrag = true;
                }
            }
        }
        event->accept();
    }
}

void MyForm::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        mousePressed = false;
        resizing = false;
        event->accept();
    }
}

void MyForm::resizeEvent(QResizeEvent *event)
{
    // Aquí puedes realizar acciones específicas cuando la ventana se redimensiona
    QMainWindow::resizeEvent(event);  // Llama al evento base para el comportamiento predeterminado
}


//! Slots
void MyForm::control_bt_vocabulario(){
    int size = documentosVocabulario.size();
    ui.boton_vocabulario->hide();
    ui.boton_volver->show();
    ui.boton_modo->show();
    ui.stackedWidgetOpciones->setCurrentIndex(3);
    if (size > 0) {
        ui.boton_vocabulario1->setText(documentosVocabulario.at(0).first);
        ui.boton_vocabulario1->show();
    }
    if (size > 1) {
        ui.boton_vocabulario2->setText(documentosVocabulario.at(1).first);
        ui.boton_vocabulario2->show();
    }
    if (size > 2) {
        ui.boton_vocabulario3->setText(documentosVocabulario.at(2).first);
        ui.boton_vocabulario3->show();
    }
    if (size > 3) {
        ui.boton_vocabulario4->setText(documentosVocabulario.at(3).first);
        ui.boton_vocabulario4->show();
    }
    if (size > 4) {
        ui.boton_vocabulario5->setText(documentosVocabulario.at(4).first);
        ui.boton_vocabulario5->show();
    }
    if (size > 5) qWarning() << "Solo se puede escoger entre los 5 primeros archivos que aparecen";
}


void MyForm::control_bt_aprender() {
    ui.stackedWidgetOpciones->setCurrentIndex(0);
    index_stackedWidget = 0;
    ui.boton_aprender->hide();
}

void MyForm::control_bt_radio1() {
    index_vocabulario = 0;
    indicesRepetidos.clear();
    qWarning() << "Cambio de vocabulario a " << documentosVocabulario.at(index_vocabulario).first;
    loadGame();
    prepararJuego();
}

void MyForm::control_bt_radio2() {
    index_vocabulario = 1;
    indicesRepetidos.clear();
    qWarning() << "Cambio de vocabulario a " << documentosVocabulario.at(index_vocabulario).first;
    loadGame();
    prepararJuego();
}

void MyForm::control_bt_radio3() {
    index_vocabulario = 2;
    indicesRepetidos.clear();
    qWarning() << "Cambio de vocabulario a " << documentosVocabulario.at(index_vocabulario).first;
    loadGame();
    prepararJuego();
}

void MyForm::control_bt_radio4() {
    index_vocabulario = 3;
    indicesRepetidos.clear();
    qWarning() << "Cambio de vocabulario a " << documentosVocabulario.at(index_vocabulario).first;
    loadGame();
    prepararJuego();
}

void MyForm::control_bt_radio5() {
    index_vocabulario = 4;
    indicesRepetidos.clear();
    qWarning() << "Cambio de vocabulario a " << documentosVocabulario.at(index_vocabulario).first;
    loadGame();
    prepararJuego();
}

void MyForm::control_bt_modo() {
    ui.boton_modo->hide();
    ui.boton_vocabulario->show();
    ui.stackedWidgetOpciones->setCurrentIndex(0);
    index_stackedWidget = 0;
}


void MyForm::control_bt_start() {    
    if(ui.boton_modo0->isChecked()){
        ui.foto->hide();

        modo = 0;
        ui.boton_modo->show();
        ui.boton_aprender->hide();

        index_stackedWidget = 2;

        ui.stackedWidgetOpciones->setCurrentIndex(2);
        ui.texto_a_traducir->show();

        qWarning() << index_lista;
        ui.texto_a_traducir->setText(wordPairs.at(index_lista).second);

        ui.label_aciertos->show();
        ui.aciertos_numero->show();
        ui.label_fallos->show();
        ui.fallos_numero->show();
        
    }
    else if (ui.boton_modo1->isChecked()) {
        ui.texto_a_traducir->hide();

        index_stackedWidget = 2;

        ui.boton_modo->show();
        ui.boton_aprender->hide();

        modo = 1;
        ui.stackedWidgetOpciones->setCurrentIndex(2);
        ui.foto->show();
        cargarPixMap();

        ui.label_aciertos->show();
        ui.aciertos_numero->show();
        ui.label_fallos->show();
        ui.fallos_numero->show();


    }
    else if (ui.boton_modo2->isChecked()) {
        ui.foto->hide();

        ui.boton_modo->show();
        ui.boton_aprender->hide();

        index_stackedWidget = 2;

        modo = 2; 
        ui.stackedWidgetOpciones->setCurrentIndex(2);
        ui.texto_a_traducir->show();
        
        qWarning() << index_lista;
        ui.texto_a_traducir->setText(wordPairs.at(index_lista).first);

        ui.label_aciertos->show();
        ui.aciertos_numero->show();
        ui.label_fallos->show();
        ui.fallos_numero->show();

    }

    //else -> no se ha seleccionado ningun modo
    qWarning()  << "Modo sleccionado " << modo;
}

void MyForm::control_bt_volver() {
    ui.boton_volver->hide();
    ui.boton_vocabulario->show();
    ui.stackedWidgetOpciones->setCurrentIndex(index_stackedWidget);
}

void MyForm::control_bt_reset() {
    modo = 0;
    ui.boton_aprender->show();
    ui.boton_vocabulario->show();
    ui.boton_modo->hide();
    ui.boton_volver->hide();
    ui.stackedWidgetOpciones->setCurrentIndex(1);
    aciertos = 0;
    fallos = 0;
    indicesRepetidos.clear();

    cargarPaths();
    loadGame();

    ui.label_aciertos->hide();
    ui.aciertos_numero->hide();
    ui.label_fallos->hide();
    ui.fallos_numero->hide();

    ui.aciertos_numero->setText(QString::number(aciertos));
    ui.fallos_numero->setText(QString::number(fallos));

    //?Falta añadir logica de reseteo
}


void MyForm::control_entrada_texto() {
    QString guess = ui.entrada_texto->text();
    ui.entrada_texto->clear();
    qWarning() << "palabra introducida " << guess;
    controlJuego(guess);
}


//!Control de la ventana


void MyForm::control_bt_maximizar() {
    maximizedByDrag = true;
    ui.boton_Expandir->hide();
    ui.boton_Contraer->show();
    lastGeometryBeforeMaximize = geometry();
    setWindowState(Qt::WindowMaximized);    
}
void MyForm::control_bt_contraer() {
    setWindowState(Qt::WindowNoState);
    maximizedByDrag = true;
    ui.boton_Expandir->show();
    ui.boton_Contraer->hide();
    setGeometry(lastGeometryBeforeMaximize);
}
void MyForm::control_bt_contraer_menu() {
    ui.frame_IZQ->hide();
    ui.botonExpandirMenu->show();
}
void MyForm::control_bt_expandir_menu() {
    ui.frame_IZQ->show();
    ui.botonExpandirMenu->hide();
}