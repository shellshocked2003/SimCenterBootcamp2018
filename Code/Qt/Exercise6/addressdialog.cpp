#include "addressdialog.h"
#include "ui_addressdialog.h"

AddressDialog::AddressDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddressDialog)
{
    ui->setupUi(this);
}

AddressDialog::~AddressDialog()
{
    delete ui;
}

void AddressDialog::setAddress(QString s)
{
    ui->addressBrowser->setText(s);
}
