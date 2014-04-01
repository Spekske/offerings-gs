#include "ledger.h"
#include "ui_ledger.h"

ledger::ledger(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ledger)
{
    ui->setupUi(this);
}

ledger::~ledger()
{
    delete ui;
}
