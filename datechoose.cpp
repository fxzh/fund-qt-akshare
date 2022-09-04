#include "datechoose.h"

DateChoose::DateChoose(QWidget* parent) noexcept :
    edt(parent),
    btn("liulan", parent),
    cal(parent)
{
    edt.setGeometry(QDateEdit_Rect);
    btn.setGeometry(200,0,70,30);
    cal.setGeometry(0,80,270,270);
    connect(&btn, SIGNAL(clicked(bool)), &cal, SLOT(show()));
    connect(&cal, SIGNAL(clicked(QDate)), &edt, SLOT(setDate(QDate)));
    connect(&cal, SIGNAL(clicked(QDate)), &cal, SLOT(close()));
    cal.close();
}
