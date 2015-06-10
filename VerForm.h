#ifndef VERFORM_H
#define VERFORM_H

#include <QWidget>

namespace Ui
{
class VerForm;
}

class VerForm : public QWidget
{
    Q_OBJECT
public:
    explicit VerForm(QWidget *parent = nullptr);
    ~VerForm();
    void addFile(const QModelIndex &idx);
private:
    Ui::VerForm *ui;
};

#endif // VERFORM_H
