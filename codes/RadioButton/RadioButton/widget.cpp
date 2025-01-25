#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // ui->radioButton->setText("Hello RadioButton");
    ui->radioButton->setChecked(true);
    ui->radioButton->setAutoExclusive(true);

    connect(ui->radioButton,&QRadioButton::toggled,this,[=](bool checked){
        qDebug() << checked;
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_radioButton_2_toggled(bool checked)
{
    qDebug() << "on_radioButton_2_toggled:" << checked;
}

