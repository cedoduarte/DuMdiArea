#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "AbrirForm.h"
#include "VerForm.h"
#include <QMdiSubWindow>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->mdiArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbrir_triggered()
{
    mAbrirForm = new AbrirForm(this);
    loadSubWindow(mAbrirForm);

    if (mVerForm != nullptr) {
        connect(mAbrirForm, &AbrirForm::selectedFile, mVerForm,
                &VerForm::addFile);
    }
}

void MainWindow::on_actionVer_triggered()
{
    mVerForm = new VerForm(this);
    loadSubWindow(mVerForm);

    if (mAbrirForm != nullptr) {
        connect(mAbrirForm, &AbrirForm::selectedFile, mVerForm,
                &VerForm::addFile);
    }
}

void MainWindow::on_actionQuitar_triggered()
{
    close();
}

void MainWindow::loadSubWindow(QWidget *widget)
{
    auto window = ui->mdiArea->addSubWindow(widget);
    window->setWindowTitle(widget->windowTitle());
    window->setWindowIcon(widget->windowIcon());
    window->resize(widget->size());
    window->show();
}
