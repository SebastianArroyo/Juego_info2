#include "mainwindow.h"
#include "ui_mainwindow.h"

// Se crea la escena.
// Es la pantalla principal del juego.
// Se actualizará todo el código por medio de Qtimmers y se mostrará todos los objetos en el escenario.
// Cuando el juego finalice, esta pantalla se cerrará.

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

