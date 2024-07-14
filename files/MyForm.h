#include <QMainWindow>
#include <QMouseEvent>  // Necesario para manejar eventos de ratón
#include <QResizeEvent> // Necesario para manejar eventos de redimensionamiento
#include "ui_MyForm.h"  // Incluye el archivo generado por Qt Designer
#include <random>
#include <QPixmap>
#include <unordered_set>

using namespace std;

//?Tengo que pensar que esta es la clase madre de la ventana
class MyForm : public QMainWindow
{
  Q_OBJECT

  public:
    MyForm (QMainWindow *parent=0);

  protected:
    void loadGame();
    void controlJuego(const QString& guess);
    void cargarPaths();
    int generarRandom();
    void prepararJuego();
    void cargarPixMap();

    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

public slots:
  void control_bt_maximizar(); //?Controla el boton de maximizar la pantalla
  void control_bt_contraer(); //? COntrola el boton de contraer
  void control_bt_contraer_menu();
  void control_bt_expandir_menu();
  void control_bt_aprender();
  void control_bt_start();
  void control_bt_reset();
  void control_bt_modo();
  void control_bt_vocabulario();
  void control_entrada_texto();
  void control_bt_volver();
  void control_bt_radio1();
  void control_bt_radio2();
  void control_bt_radio3();
  void control_bt_radio4();
  void control_bt_radio5();



private:
    Ui::MyForm ui;
  //*Variables de control del raton y tamaño ventana  
    bool mousePressed;  // Variable para rastrear si se ha presionado el botón del ratón para iniciar el movimiento de la ventana
    QPoint mousePos;    // Guarda la posición del ratón relativa a la esquina superior izquierda de la ventana al iniciar el arrastre

    bool resizing; // Variable para rastrear si se está redimensionando
    QRect lastGeometry; // Guarda la geometría anterior de la ventana
    QPoint lastMousePos; // Guarda la última posición del ratón
    bool allowMove;

    bool maximizedByDrag; // Variable para rastrear si la ventana ha sido maximizada al arrastrarla
    QRect lastGeometryBeforeMaximize; // Guarda la geometría de la ventana antes de maximizarla

  //*variables Lógica de la aplicacción
  int modo; //? varia de 0-2   0->TraductorEspañol->ingles  1->InterpretacionImagenes   2->TraductorIngles->Español
  QList<QPair<QString, QString>> wordPairs;
  QList<QPair<QString, QString>> documentosVocabulario;
  int index_vocabulario = 0;
  int index_lista = 0;
  int index_stackedWidget; //! 0 -> boton de modo ; 2->menu del juego ; 3-> vocabulario menu; 1->logo
  int aciertos;
  int fallos;
  unordered_set<int> indicesRepetidos;
};