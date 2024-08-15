#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <random>
#include <QCheckBox>
#include <QString>
#include <QWidget>
#include <QClipboard>
#include <QApplication>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    char* createPassword(int len, int comp);
    void updateSymbols(bool checked, char symbol);

private slots:
    void on_PassLengthSlider_sliderMoved(int position);
    void on_PassCompSlider_sliderMoved(int position);
    void on_GenPass_clicked();
    void on_CopyButton_clicked();

    void on_checkBox_29_stateChanged(int arg1);
    void on_checkBox_30_stateChanged(int arg1);
    void on_checkBox_31_stateChanged(int arg1);
    void on_checkBox_32_stateChanged(int arg1);
    void on_checkBox_33_stateChanged(int arg1);
    void on_checkBox_34_stateChanged(int arg1);
    void on_checkBox_35_stateChanged(int arg1);
    void on_checkBox_36_stateChanged(int arg1);
    void on_checkBox_37_stateChanged(int arg1);
    void on_checkBox_38_stateChanged(int arg1);
    void on_checkBox_39_stateChanged(int arg1);
    void on_checkBox_40_stateChanged(int arg1);
    void on_checkBox_41_stateChanged(int arg1);
    void on_checkBox_42_stateChanged(int arg1);
    void on_checkBox_43_stateChanged(int arg1);
    void on_checkBox_44_stateChanged(int arg1);
    void on_checkBox_45_stateChanged(int arg1);
    void on_checkBox_46_stateChanged(int arg1);
    void on_checkBox_47_stateChanged(int arg1);
    void on_checkBox_48_stateChanged(int arg1);
    void on_checkBox_49_stateChanged(int arg1);
    void on_checkBox_50_stateChanged(int arg1);
    void on_checkBox_51_stateChanged(int arg1);
    void on_checkBox_52_stateChanged(int arg1);
    void on_checkBox_53_stateChanged(int arg1);
    void on_checkBox_54_stateChanged(int arg1);
    void on_checkBox_55_stateChanged(int arg1);
    void on_checkBox_56_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    int *_passLength;
    int *_passComp;
    std::vector<char> *_letters;
    std::vector<char> *_numbers;
    std::vector<char> *_symbols;
};

#endif // MAINWINDOW_H
