#include "AbrirForm.h"
#include "ui_AbrirForm.h"
#include <QFileSystemModel>

AbrirForm::AbrirForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AbrirForm)
{
    ui->setupUi(this);
    mModel = new QFileSystemModel(this);
    mModel->setRootPath(QDir::homePath());
    ui->columnView->setModel(mModel);

    layout()->setMargin(0);
}

AbrirForm::~AbrirForm()
{
    delete ui;
}

void AbrirForm::on_abrirPushButton_clicked()
{
    emit selectedFile(ui->columnView->currentIndex());
}
