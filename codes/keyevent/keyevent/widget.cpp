#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    qDebug() << "keyPressEvent:"<<e->text() << e->isAutoRepeat();
}

void Widget::keyReleaseEvent(QKeyEvent *e)
{
    qDebug() << "keyReleaseEvent";
}
