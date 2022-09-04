#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QPushButton>
#include <QDateEdit>
#include <QCalendarWidget>
#include <QDebug>
#include "datechoose.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QCalendarWidget cal;
    QDateEdit deit;
    QPushButton searchButton;
    DateChoose dc;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void print();
    void p2(const QDate& date)
    {
        qDebug()<<date;
    }
    void p3()
    {
        qDebug()<<cal.selectedDate();
    }
};
#endif // MAINWINDOW_H
