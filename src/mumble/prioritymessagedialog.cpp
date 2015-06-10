#include "PriorityMessageDialog.h"
#include "ui_PriorityMessageDialog.h"

PriorityMessageDialog::PriorityMessageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PriorityMessageDialog)
{
    ui->setupUi(this);
    this->hide();
}

PriorityMessageDialog::~PriorityMessageDialog()
{
    delete ui;
}

void PriorityMessageDialog::newMessage(QString msg) {
    ui->textBrowser->append(msg);
    this->show();
    this->activateWindow();
}

void PriorityMessageDialog::on_buttonBox_accepted()
{
    ui->textBrowser->clear();
    this->hide();
}
