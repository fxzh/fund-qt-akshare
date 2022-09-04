#ifndef DATECHOOSE_H
#define DATECHOOSE_H

#include <QWidget>
#include <QPushButton>
#include <QDateEdit>
#include <QCalendarWidget>

constexpr int QDateEdit_ax = 0;
constexpr int QDateEdit_ay = 0;
constexpr int QDateEdit_aw = 150;
constexpr int QDateEdit_ah = 30;
constexpr QPoint QDateEdit_PosPoint{QDateEdit_ax, QDateEdit_ay};
constexpr QPoint QDateEdit_SizePoint{QDateEdit_aw, QDateEdit_ah};
constexpr QRect QDateEdit_Rect{QDateEdit_PosPoint, QDateEdit_SizePoint};

class DateChoose : public QWidget
{
    Q_OBJECT
public:
    QDateEdit edt;
    QPushButton btn;
    QCalendarWidget cal;
    DateChoose(QWidget *parent) noexcept;
};

#endif // DATECHOOSE_H
