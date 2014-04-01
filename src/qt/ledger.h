#ifndef LEDGER_H
#define LEDGER_H

#include <QWidget>

namespace Ui {
class ledger;
}

class ledger : public QWidget
{
    Q_OBJECT
    
public:
    explicit ledger(QWidget *parent = 0);
    ~ledger();
    
private:
    Ui::ledger *ui;
};

#endif // LEDGER_H
