#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPointer>

namespace Ui
{
class MainWindow;
}

class AbrirForm;
class VerForm;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actionAbrir_triggered();
    void on_actionVer_triggered();
    void on_actionQuitar_triggered();
private:
    Ui::MainWindow *ui;
    QPointer<AbrirForm> mAbrirForm;
    QPointer<VerForm> mVerForm;

    void loadSubWindow(QWidget *widget);
};

#endif // MAINWINDOW_H
