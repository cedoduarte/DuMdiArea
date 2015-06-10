#include "VerForm.h"
#include "ui_VerForm.h"

VerForm::VerForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VerForm)
{
    ui->setupUi(this);
    layout()->setMargin(0);
}

VerForm::~VerForm()
{
    delete ui;
}

void VerForm::addFile(const QModelIndex &idx)
{
    ui->listWidget->addItem(idx.data().toString());
}
