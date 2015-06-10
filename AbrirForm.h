#ifndef ABRIRFORM_H
#define ABRIRFORM_H

#include <QWidget>

namespace Ui
{
class AbrirForm;
}

class QFileSystemModel;

class AbrirForm : public QWidget
{
    Q_OBJECT
public:
    explicit AbrirForm(QWidget *parent = nullptr);
    ~AbrirForm();
signals:
    void selectedFile(const QModelIndex &);
private slots:
    void on_abrirPushButton_clicked();
private:
    Ui::AbrirForm *ui;
    QFileSystemModel *mModel;
};

#endif // ABRIRFORM_H
