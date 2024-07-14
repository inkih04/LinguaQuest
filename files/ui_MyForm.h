/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frameSuperior;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *boton_Minimizar;
    QPushButton *boton_Contraer;
    QPushButton *boton_Expandir;
    QPushButton *boton_Cerrar;
    QFrame *frameInferior;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_IZQ;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_botonContraer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *botonContraerMenu;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_botones_menu;
    QVBoxLayout *verticalLayout_3;
    QPushButton *boton_reset;
    QPushButton *boton_modo;
    QPushButton *boton_aprender;
    QPushButton *boton_vocabulario;
    QPushButton *boton_volver;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_DR;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *botonExpandirMenu;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_aciertos;
    QLabel *aciertos_numero;
    QLabel *label_fallos;
    QLabel *fallos_numero;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *stackedWidgetOpciones;
    QWidget *paginaJuego;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *boton_modo0;
    QRadioButton *boton_modo1;
    QRadioButton *boton_modo2;
    QPushButton *boton_start;
    QWidget *paginaLogo;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QWidget *Juego;
    QVBoxLayout *verticalLayout_8;
    QFrame *sup;
    QVBoxLayout *verticalLayout_9;
    QLabel *foto;
    QLabel *texto_a_traducir;
    QFrame *inf;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *entrada_texto;
    QWidget *vocabulario_a_escoger;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *boton_vocabulario1;
    QRadioButton *boton_vocabulario2;
    QRadioButton *boton_vocabulario3;
    QRadioButton *boton_vocabulario4;
    QRadioButton *boton_vocabulario5;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(819, 608);
        QIcon icon;
        icon.addFile(QString::fromUtf8("imagenes/lOGO.png"), QSize(), QIcon::Normal, QIcon::Off);
        MyForm->setWindowIcon(icon);
        MyForm->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MyForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: none;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameSuperior = new QFrame(frame);
        frameSuperior->setObjectName(QString::fromUtf8("frameSuperior"));
        frameSuperior->setMinimumSize(QSize(0, 42));
        frameSuperior->setMaximumSize(QSize(16777215, 50));
        frameSuperior->setStyleSheet(QString::fromUtf8("QFrame{\n"
"    background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton{\n"
"    background-color: #000000ff;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background-color: rgb(53, 53, 79);\n"
"    border-radius: 20px;\n"
"}\n"
""));
        frameSuperior->setFrameShape(QFrame::StyledPanel);
        frameSuperior->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frameSuperior);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frameSuperior);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 87 18pt \"Montserrat\";\n"
"color: rgb(20, 200, 220);\n"
"font-weight: bold;\n"
""));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(380, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        boton_Minimizar = new QPushButton(frameSuperior);
        boton_Minimizar->setObjectName(QString::fromUtf8("boton_Minimizar"));
        boton_Minimizar->setMinimumSize(QSize(40, 40));
        boton_Minimizar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("imagenes/minus_symbol2.png"), QSize(), QIcon::Normal, QIcon::Off);
        boton_Minimizar->setIcon(icon1);
        boton_Minimizar->setIconSize(QSize(38, 38));

        horizontalLayout_2->addWidget(boton_Minimizar);

        boton_Contraer = new QPushButton(frameSuperior);
        boton_Contraer->setObjectName(QString::fromUtf8("boton_Contraer"));
        boton_Contraer->setEnabled(true);
        boton_Contraer->setMinimumSize(QSize(40, 40));
        boton_Contraer->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("imagenes/flecha5invertida.png"), QSize(), QIcon::Normal, QIcon::Off);
        boton_Contraer->setIcon(icon2);
        boton_Contraer->setIconSize(QSize(38, 38));

        horizontalLayout_2->addWidget(boton_Contraer);

        boton_Expandir = new QPushButton(frameSuperior);
        boton_Expandir->setObjectName(QString::fromUtf8("boton_Expandir"));
        boton_Expandir->setMinimumSize(QSize(40, 40));
        boton_Expandir->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("imagenes/flecha5.png"), QSize(), QIcon::Normal, QIcon::Off);
        boton_Expandir->setIcon(icon3);
        boton_Expandir->setIconSize(QSize(38, 38));

        horizontalLayout_2->addWidget(boton_Expandir);

        boton_Cerrar = new QPushButton(frameSuperior);
        boton_Cerrar->setObjectName(QString::fromUtf8("boton_Cerrar"));
        boton_Cerrar->setMinimumSize(QSize(40, 40));
        boton_Cerrar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("imagenes/minus_symbolX.png"), QSize(), QIcon::Normal, QIcon::Off);
        boton_Cerrar->setIcon(icon4);
        boton_Cerrar->setIconSize(QSize(38, 38));

        horizontalLayout_2->addWidget(boton_Cerrar);


        verticalLayout->addWidget(frameSuperior);

        frameInferior = new QFrame(frame);
        frameInferior->setObjectName(QString::fromUtf8("frameInferior"));
        frameInferior->setStyleSheet(QString::fromUtf8("border-color: rgb(170, 0, 0);"));
        frameInferior->setFrameShape(QFrame::StyledPanel);
        frameInferior->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameInferior);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_IZQ = new QFrame(frameInferior);
        frame_IZQ->setObjectName(QString::fromUtf8("frame_IZQ"));
        frame_IZQ->setMaximumSize(QSize(270, 16777215));
        frame_IZQ->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: rgb(53, 53, 79);\n"
"}\n"
"\n"
"QPushButton {\n"
"    font: 87 18pt \"Arial Black\";\n"
"    font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    background-color: #000000ff;\n"
"    color: rgb(20, 200, 220);\n"
"    border-radius: 5px;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: black;\n"
"}\n"
""));
        frame_IZQ->setFrameShape(QFrame::StyledPanel);
        frame_IZQ->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_IZQ);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_botonContraer = new QFrame(frame_IZQ);
        frame_botonContraer->setObjectName(QString::fromUtf8("frame_botonContraer"));
        frame_botonContraer->setMaximumSize(QSize(16777215, 40));
        frame_botonContraer->setFrameShape(QFrame::StyledPanel);
        frame_botonContraer->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_botonContraer);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 5, 0, 0);
        botonContraerMenu = new QPushButton(frame_botonContraer);
        botonContraerMenu->setObjectName(QString::fromUtf8("botonContraerMenu"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("imagenes/flechasAzules.png"), QSize(), QIcon::Normal, QIcon::Off);
        botonContraerMenu->setIcon(icon5);
        botonContraerMenu->setIconSize(QSize(38, 38));

        horizontalLayout_4->addWidget(botonContraerMenu);

        horizontalSpacer_2 = new QSpacerItem(219, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(frame_botonContraer);

        frame_botones_menu = new QFrame(frame_IZQ);
        frame_botones_menu->setObjectName(QString::fromUtf8("frame_botones_menu"));
        frame_botones_menu->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: rgb(53, 53, 79);\n"
"}\n"
"\n"
"QPushButton {\n"
"    font: 87 18pt \"Arial Black\";\n"
"    font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    background-color: #000000ff;\n"
"    color: rgb(20, 200, 220);\n"
"    border-radius: 5px;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: black;\n"
"}\n"
""));
        frame_botones_menu->setFrameShape(QFrame::StyledPanel);
        frame_botones_menu->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_botones_menu);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 0, 10, 0);
        boton_reset = new QPushButton(frame_botones_menu);
        boton_reset->setObjectName(QString::fromUtf8("boton_reset"));

        verticalLayout_3->addWidget(boton_reset);

        boton_modo = new QPushButton(frame_botones_menu);
        boton_modo->setObjectName(QString::fromUtf8("boton_modo"));

        verticalLayout_3->addWidget(boton_modo);

        boton_aprender = new QPushButton(frame_botones_menu);
        boton_aprender->setObjectName(QString::fromUtf8("boton_aprender"));

        verticalLayout_3->addWidget(boton_aprender);

        boton_vocabulario = new QPushButton(frame_botones_menu);
        boton_vocabulario->setObjectName(QString::fromUtf8("boton_vocabulario"));

        verticalLayout_3->addWidget(boton_vocabulario);

        boton_volver = new QPushButton(frame_botones_menu);
        boton_volver->setObjectName(QString::fromUtf8("boton_volver"));

        verticalLayout_3->addWidget(boton_volver);

        horizontalSpacer_5 = new QSpacerItem(60, 230, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(frame_botones_menu);


        horizontalLayout_3->addWidget(frame_IZQ);

        frame_DR = new QFrame(frameInferior);
        frame_DR->setObjectName(QString::fromUtf8("frame_DR"));
        frame_DR->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: rgb(53, 53, 79);\n"
"}\n"
"\n"
"QLabel {\n"
"    font: 87 12pt \"Arial Black\";\n"
"    background-color: #000000ff;\n"
"    color: rgb(20, 200, 220);\n"
"    border: 0px solid #14C8DC;\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:black\n"
"}\n"
""));
        frame_DR->setFrameShape(QFrame::StyledPanel);
        frame_DR->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_DR);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame_DR);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMaximumSize(QSize(16777215, 40));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: rgb(53, 53, 79);\n"
"}\n"
"\n"
"QPushButton {\n"
"    font: 87 18pt \"Arial Black\";\n"
"    font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    background-color: #000000ff;\n"
"    color: rgb(20, 200, 220);\n"
"    border-radius: 5px;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: black;\n"
"}\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_4);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 5, 0, 0);
        botonExpandirMenu = new QPushButton(frame_4);
        botonExpandirMenu->setObjectName(QString::fromUtf8("botonExpandirMenu"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("imagenes/flechasAzulesDerecha.png"), QSize(), QIcon::Normal, QIcon::Off);
        botonExpandirMenu->setIcon(icon6);
        botonExpandirMenu->setIconSize(QSize(38, 38));

        horizontalLayout_5->addWidget(botonExpandirMenu);

        horizontalSpacer_3 = new QSpacerItem(585, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_aciertos = new QLabel(frame_4);
        label_aciertos->setObjectName(QString::fromUtf8("label_aciertos"));
        label_aciertos->setStyleSheet(QString::fromUtf8("\n"
"    font: 87 15pt \"Arial Black\";\n"
"    background-color: #000000ff;\n"
"	font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    color: rgb(20, 200, 220);\n"
"    border: 0px solid #14C8DC;\n"
""));

        horizontalLayout_5->addWidget(label_aciertos);

        aciertos_numero = new QLabel(frame_4);
        aciertos_numero->setObjectName(QString::fromUtf8("aciertos_numero"));

        horizontalLayout_5->addWidget(aciertos_numero);

        label_fallos = new QLabel(frame_4);
        label_fallos->setObjectName(QString::fromUtf8("label_fallos"));
        label_fallos->setStyleSheet(QString::fromUtf8("\n"
"    font: 87 15pt \"Arial Black\";\n"
"    background-color: #000000ff;\n"
"	font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    color: rgb(20, 200, 220);\n"
"    border: 0px solid #14C8DC;"));

        horizontalLayout_5->addWidget(label_fallos);

        fallos_numero = new QLabel(frame_4);
        fallos_numero->setObjectName(QString::fromUtf8("fallos_numero"));

        horizontalLayout_5->addWidget(fallos_numero);


        verticalLayout_4->addWidget(frame_4);

        frame_6 = new QFrame(frame_DR);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: 87 20pt \"Arial Black\";\n"
"    background-color: #000000ff;\n"
"	font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    color: rgb(20, 200, 220);\n"
"    border: 0px solid #14C8DC;\n"
"}"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(15, 15, 15, 15);
        stackedWidgetOpciones = new QStackedWidget(frame_6);
        stackedWidgetOpciones->setObjectName(QString::fromUtf8("stackedWidgetOpciones"));
        paginaJuego = new QWidget();
        paginaJuego->setObjectName(QString::fromUtf8("paginaJuego"));
        horizontalLayout_6 = new QHBoxLayout(paginaJuego);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        groupBox = new QGroupBox(paginaJuego);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 10));
        groupBox->setStyleSheet(QString::fromUtf8("    font: 87 16pt \"Arial Black\";\n"
"    font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    background-color: #000000ff;\n"
"    color: rgb(20, 200, 220);\n"
"    border-radius: 5px;\n"
"\n"
"QRadioButton {\n"
"    font-size: 18px;          /* Tama\303\261o de la fuente */\n"
"    padding: 10px;            /* Espacio alrededor del texto */\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 25px;              /* Ancho del indicador */\n"
"    height: 25px;             /* Alto del indicador */\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 15, 0);
        boton_modo0 = new QRadioButton(groupBox);
        boton_modo0->setObjectName(QString::fromUtf8("boton_modo0"));

        verticalLayout_7->addWidget(boton_modo0);

        boton_modo1 = new QRadioButton(groupBox);
        boton_modo1->setObjectName(QString::fromUtf8("boton_modo1"));

        verticalLayout_7->addWidget(boton_modo1);

        boton_modo2 = new QRadioButton(groupBox);
        boton_modo2->setObjectName(QString::fromUtf8("boton_modo2"));

        verticalLayout_7->addWidget(boton_modo2);

        boton_start = new QPushButton(groupBox);
        boton_start->setObjectName(QString::fromUtf8("boton_start"));
        boton_start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 87 16pt \"Arial Black\";\n"
"    font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    background-color: #000000ff;\n"
"    color: rgb(20, 200, 220);\n"
"    border-radius: 5px;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(53, 53, 79);\n"
"}\n"
""));

        verticalLayout_7->addWidget(boton_start);


        horizontalLayout_6->addWidget(groupBox);

        stackedWidgetOpciones->addWidget(paginaJuego);
        paginaLogo = new QWidget();
        paginaLogo->setObjectName(QString::fromUtf8("paginaLogo"));
        verticalLayout_6 = new QVBoxLayout(paginaLogo);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(paginaLogo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("imagenes/lOGO.png")));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);

        stackedWidgetOpciones->addWidget(paginaLogo);
        Juego = new QWidget();
        Juego->setObjectName(QString::fromUtf8("Juego"));
        Juego->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        verticalLayout_8 = new QVBoxLayout(Juego);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        sup = new QFrame(Juego);
        sup->setObjectName(QString::fromUtf8("sup"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sup->sizePolicy().hasHeightForWidth());
        sup->setSizePolicy(sizePolicy1);
        sup->setFrameShape(QFrame::StyledPanel);
        sup->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(sup);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        foto = new QLabel(sup);
        foto->setObjectName(QString::fromUtf8("foto"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(foto->sizePolicy().hasHeightForWidth());
        foto->setSizePolicy(sizePolicy2);
        foto->setMaximumSize(QSize(600, 600));
        foto->setBaseSize(QSize(100, 100));

        verticalLayout_9->addWidget(foto);

        texto_a_traducir = new QLabel(sup);
        texto_a_traducir->setObjectName(QString::fromUtf8("texto_a_traducir"));
        texto_a_traducir->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: 87 20pt \"Arial Black\";\n"
"    background-color: #000000ff;\n"
"	font-weight: bold; /* A\303\261adir esta l\303\255nea */\n"
"    color: rgb(20, 200, 220);\n"
"    border: 0px solid #14C8DC;\n"
"}"));
        texto_a_traducir->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(texto_a_traducir);


        verticalLayout_8->addWidget(sup);

        inf = new QFrame(Juego);
        inf->setObjectName(QString::fromUtf8("inf"));
        inf->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        inf->setFrameShape(QFrame::StyledPanel);
        inf->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(inf);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        entrada_texto = new QLineEdit(inf);
        entrada_texto->setObjectName(QString::fromUtf8("entrada_texto"));
        entrada_texto->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #14c8dc;\n"
"    border-radius: 8px;\n"
"    color: rgb(255, 255, 255);\n"
"    background-color: rgb(0, 0, 0);\n"
"    font: 75 12pt \"Times New Roman\";\n"
"}\n"
""));
        entrada_texto->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(entrada_texto);


        verticalLayout_8->addWidget(inf);

        stackedWidgetOpciones->addWidget(Juego);
        vocabulario_a_escoger = new QWidget();
        vocabulario_a_escoger->setObjectName(QString::fromUtf8("vocabulario_a_escoger"));
        vocabulario_a_escoger->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_7 = new QHBoxLayout(vocabulario_a_escoger);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_2 = new QGroupBox(vocabulario_a_escoger);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    font-size: 18px;          /* Tama\303\261o de la fuente */\n"
"    padding: 10px;            /* Espacio alrededor del texto */\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 25px;              /* Ancho del indicador */\n"
"    height: 25px;             /* Alto del indicador */\n"
"}"));
        verticalLayout_11 = new QVBoxLayout(groupBox_2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        boton_vocabulario1 = new QRadioButton(groupBox_2);
        boton_vocabulario1->setObjectName(QString::fromUtf8("boton_vocabulario1"));
        boton_vocabulario1->setChecked(true);

        verticalLayout_11->addWidget(boton_vocabulario1);

        boton_vocabulario2 = new QRadioButton(groupBox_2);
        boton_vocabulario2->setObjectName(QString::fromUtf8("boton_vocabulario2"));

        verticalLayout_11->addWidget(boton_vocabulario2);

        boton_vocabulario3 = new QRadioButton(groupBox_2);
        boton_vocabulario3->setObjectName(QString::fromUtf8("boton_vocabulario3"));

        verticalLayout_11->addWidget(boton_vocabulario3);

        boton_vocabulario4 = new QRadioButton(groupBox_2);
        boton_vocabulario4->setObjectName(QString::fromUtf8("boton_vocabulario4"));

        verticalLayout_11->addWidget(boton_vocabulario4);

        boton_vocabulario5 = new QRadioButton(groupBox_2);
        boton_vocabulario5->setObjectName(QString::fromUtf8("boton_vocabulario5"));

        verticalLayout_11->addWidget(boton_vocabulario5);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_11->addItem(verticalSpacer_2);


        horizontalLayout_7->addWidget(groupBox_2);

        stackedWidgetOpciones->addWidget(vocabulario_a_escoger);

        verticalLayout_5->addWidget(stackedWidgetOpciones);


        verticalLayout_4->addWidget(frame_6);


        horizontalLayout_3->addWidget(frame_DR);


        verticalLayout->addWidget(frameInferior);

        verticalLayout->setStretch(1, 8);

        horizontalLayout->addWidget(frame);

        MyForm->setCentralWidget(centralwidget);

        retranslateUi(MyForm);
        QObject::connect(boton_Cerrar, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(boton_Minimizar, SIGNAL(clicked()), MyForm, SLOT(showMinimized()));

        stackedWidgetOpciones->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QMainWindow *MyForm)
    {
        MyForm->setWindowTitle(QCoreApplication::translate("MyForm", "LinguaQuest", nullptr));
        label->setText(QCoreApplication::translate("MyForm", "LinguaQuest", nullptr));
        boton_Minimizar->setText(QString());
        boton_Contraer->setText(QString());
        boton_Expandir->setText(QString());
        boton_Cerrar->setText(QString());
        botonContraerMenu->setText(QString());
        boton_reset->setText(QCoreApplication::translate("MyForm", "Reset", nullptr));
        boton_modo->setText(QCoreApplication::translate("MyForm", "Modo", nullptr));
        boton_aprender->setText(QCoreApplication::translate("MyForm", " Aprender ", nullptr));
        boton_vocabulario->setText(QCoreApplication::translate("MyForm", " Vocabulario ", nullptr));
        boton_volver->setText(QCoreApplication::translate("MyForm", "Volver", nullptr));
        botonExpandirMenu->setText(QString());
        label_aciertos->setText(QCoreApplication::translate("MyForm", "ACIERTOS ", nullptr));
        aciertos_numero->setText(QCoreApplication::translate("MyForm", "0 ", nullptr));
        label_fallos->setText(QCoreApplication::translate("MyForm", "  FALLOS", nullptr));
        fallos_numero->setText(QCoreApplication::translate("MyForm", "   0 ", nullptr));
        groupBox->setTitle(QString());
        boton_modo0->setText(QCoreApplication::translate("MyForm", "Traductor Espa\303\261ol", nullptr));
        boton_modo1->setText(QCoreApplication::translate("MyForm", "Interpretaci\303\263n Imagenes", nullptr));
        boton_modo2->setText(QCoreApplication::translate("MyForm", "Traductor Ingl\303\251s", nullptr));
        boton_start->setText(QCoreApplication::translate("MyForm", "Start", nullptr));
        label_2->setText(QString());
        foto->setText(QString());
        texto_a_traducir->setText(QCoreApplication::translate("MyForm", "h", nullptr));
        groupBox_2->setTitle(QString());
        boton_vocabulario1->setText(QCoreApplication::translate("MyForm", "RadioButton", nullptr));
        boton_vocabulario2->setText(QCoreApplication::translate("MyForm", "RadioButton", nullptr));
        boton_vocabulario3->setText(QCoreApplication::translate("MyForm", "RadioButton", nullptr));
        boton_vocabulario4->setText(QCoreApplication::translate("MyForm", "RadioButton", nullptr));
        boton_vocabulario5->setText(QCoreApplication::translate("MyForm", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
