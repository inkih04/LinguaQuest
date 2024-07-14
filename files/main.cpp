#include <QApplication>
#include "MyForm.h"

int main(int argc, char **argv) {
    QApplication a(argc, argv);

    MyForm myf;
    myf.show();

    return a.exec();
}
