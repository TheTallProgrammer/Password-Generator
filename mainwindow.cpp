#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <algorithm>
#include <stdexcept>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->excludeChar->hide();
    _passLength = new int(1);
    _passComp = new int(1);

    this->setWindowIcon(QIcon("../../icon.png"));
    this->setWindowTitle("Falkenberg's Password Generator");

    _letters = new std::vector<char>(
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
         'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
         'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'});

    _numbers = new std::vector<char>(
        {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'});

    _symbols = new std::vector<char>(
        {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '=', '+',
         '[', ']', '{', '}', ';', ':', '\'', '\"', '<', '>', ',', '.', '?', '/'});

    ui->PassLength->setText(QString::number(*_passLength));
    ui->PassComp->setText(QString::number(*_passComp));
}

MainWindow::~MainWindow()
{
    delete _passLength;  // Free the allocated memory upon destructing it (program close)
    delete _passComp;
    delete _letters;
    delete _numbers;
    delete _symbols;
    delete ui;
}

void MainWindow::on_PassLengthSlider_sliderMoved(int position)
{
    *_passLength = position;
    ui->PassLength->setText(QString::number(position));

    // Check if the position is greater than 56 and adjust the font size accordingly
    QFont font = ui->GenPassText->font();
    if (position > 52) {
        font.setPointSize(11); // Set font size to 12
    } else if (position > 32) {
        font.setPointSize(14); // Set font size to 14
    } else {
        font.setPointSize(20); // Set font size to 16
    }
    ui->GenPassText->setFont(font);
}

void MainWindow::on_PassCompSlider_sliderMoved(int position)
{
    *_passComp = position;
    ui->PassComp->setText(QString::number(position));
    if(position == 3) ui->excludeChar->show();
    else ui->excludeChar->hide();
}

void MainWindow::on_GenPass_clicked()
{
    char* password = createPassword(*_passLength, *_passComp);
    ui->GenPassText->setText(password); // Placeholder for where the generated password will be set
    delete[] password;  // Don't forget to free the allocated memory
}

char* MainWindow::createPassword(int len, int comp) {
    // Dynamically allocate memory for a char array of the given size
    char* array = new char[len + 1];  // +1 for the null terminator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define the distribution and sources based on the complexity
    std::uniform_int_distribution<size_t> distr;

    switch(comp) {
    case 1: // Letters only
        distr = std::uniform_int_distribution<size_t>(0, _letters->size() - 1);
        break;
    case 2: // Letters and numbers
        distr = std::uniform_int_distribution<size_t>(0, _letters->size() + _numbers->size() - 1);
        break;
    case 3: // Letters, numbers, and symbols
        distr = std::uniform_int_distribution<size_t>(0, _letters->size() + _numbers->size() + _symbols->size() - 1);
        break;
    default:
        throw std::invalid_argument("Invalid complexity level.");
    }

    for(int i = 0; i < len; ++i) {
        size_t randInt = distr(gen);
        if (comp == 1) {
            array[i] = _letters->at(randInt);
        } else if (comp == 2) {
            if (randInt < _letters->size()) {
                array[i] = _letters->at(randInt);
            } else {
                array[i] = _numbers->at(randInt - _letters->size());
            }
        } else if (comp == 3) {
            if (randInt < _letters->size()) {
                array[i] = _letters->at(randInt);
            } else if (randInt < _letters->size() + _numbers->size()) {
                array[i] = _numbers->at(randInt - _letters->size());
            } else {
                array[i] = _symbols->at(randInt - _letters->size() - _numbers->size());
            }
        }
    }

    array[len] = '\0';  // Null-terminate the string
    return array;  // Return the pointer to the allocated array
}

void MainWindow::on_CopyButton_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString textToCopy = ui->GenPassText->text();
    clipboard->setText(textToCopy);
}

void MainWindow::updateSymbols(bool checked, char symbol){
    if (checked){
        auto it = std::remove(_symbols->begin(), _symbols->end(), symbol);
        if (it != _symbols->end()){
            _symbols->erase(it, _symbols->end());
        }
    } else {
        if (std::find(_symbols->begin(), _symbols->end(), symbol) == _symbols->end()){
            _symbols->push_back(symbol);
        }
    }
}

void MainWindow::on_checkBox_29_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '&');
}
void MainWindow::on_checkBox_30_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '@');
}
void MainWindow::on_checkBox_31_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '{');
    updateSymbols(arg1 == Qt::Checked, '}');
}
void MainWindow::on_checkBox_32_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '#');
}
void MainWindow::on_checkBox_33_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '[');
    updateSymbols(arg1 == Qt::Checked, ']');
}
void MainWindow::on_checkBox_34_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '=');
}
void MainWindow::on_checkBox_35_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '(');
    updateSymbols(arg1 == Qt::Checked, ')');
}
void MainWindow::on_checkBox_36_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '-');
}
void MainWindow::on_checkBox_37_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '?');
}
void MainWindow::on_checkBox_38_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '`');
}
void MainWindow::on_checkBox_39_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '\\');
}
void MainWindow::on_checkBox_40_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '/');
}
void MainWindow::on_checkBox_41_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '|');
}
void MainWindow::on_checkBox_42_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '*');
}
void MainWindow::on_checkBox_43_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '"');
}
void MainWindow::on_checkBox_44_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, ':');
}
void MainWindow::on_checkBox_45_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, ';');
}
void MainWindow::on_checkBox_46_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '<');
    updateSymbols(arg1 == Qt::Checked, '>');
}
void MainWindow::on_checkBox_47_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '~');
}
void MainWindow::on_checkBox_48_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '$');
}
void MainWindow::on_checkBox_49_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '!');
}
void MainWindow::on_checkBox_50_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '%');
}
void MainWindow::on_checkBox_51_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '^');
}
void MainWindow::on_checkBox_52_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '_');
}
void MainWindow::on_checkBox_53_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '+');
}
void MainWindow::on_checkBox_54_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '\'');
}
void MainWindow::on_checkBox_55_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, ',');
}
void MainWindow::on_checkBox_56_stateChanged(int arg1)
{
    updateSymbols(arg1 == Qt::Checked, '.');
}

