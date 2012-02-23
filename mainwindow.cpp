#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "singleton"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect( ui->actionFullscreen , SIGNAL(triggered()), this , SLOT(fullscreen()));
    QObject::connect( ui->fullscreen , SIGNAL(toggled(bool)), this , SLOT(fullscreen(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool state = false;
void MainWindow::fullscreen( bool fscreen )
{
    if( fscreen )
    {
        QWidget::showFullScreen();
        //    ui->menuBar->hide();
    }
    else
    {
        QWidget::showNormal();
    }
    state = fscreen;
}

void MainWindow::fullscreen()
{
    state = !state;
    fullscreen( state );
}
