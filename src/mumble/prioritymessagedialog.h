#ifndef PRIORITYMESSAGEDIALOG_H
#define PRIORITYMESSAGEDIALOG_H

#include <QDialog>

namespace Ui {
class PriorityMessageDialog;
}

class PriorityMessageDialog : public QDialog
{
    Q_OBJECT

public:
    PriorityMessageDialog(QWidget *parent = 0);
    ~PriorityMessageDialog();
    void newMessage(QString msg);
private slots:
    void on_buttonBox_accepted();

private:
    Ui::PriorityMessageDialog *ui;
};

#endif // PRIORITYMESSAGEDIALOG_H
