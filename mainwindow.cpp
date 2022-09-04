#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
//      searchButton("aaa", this),
//      deit(this),
//      cal(this),
      dc(this)
{
    deit.setGeometry(100,100,100,100);
    cal.setGeometry(100,200,300,300);
    connect(&cal,QOverload<>::of(&QCalendarWidget::selectionChanged),this,[&](){qDebug()<<cal.selectedDate()<<" 1";});
    connect(&cal,QOverload<>::of(&QCalendarWidget::selectionChanged),&QCalendarWidget::close);
//    connect(&cal,SIGNAL(selectionChanged()),this,SLOT(p3()));
//    connect(&cal,QOverload<QDate>::of(&QCalendarWidget::activated),[&](QDate dt){qDebug()<<dt<<" 2";});
//    connect(&cal,SIGNAL(activated(QDate)),this,SLOT(p2(QDate)));

    searchButton.setGeometry(10,10,50,50);
//    searchButton.show();

    dc.setGeometry(500,500,300,300);
//    dc.show();
    resize(1000,1000);
}

void MainWindow::print()
{
    qDebug()<<"11";
}

MainWindow::~MainWindow()
{
}

