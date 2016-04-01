#ifndef NOTIFICATIONDIALOG_H
#define NOTIFICATIONDIALOG_H

#include <QDialog>
#include <QDesktopWidget>
#include <QPropertyAnimation>
#include <QTimer>
#include <QProcess>
#include <QThread>
#include "notificationdbus.h"

class NotificationDBus;

namespace Ui {
class NotificationDialog;
}

class NotificationDialog : public QDialog
{
    Q_OBJECT
    Q_PROPERTY(QRect geometry READ geometry WRITE setGeometry)

public:
    explicit NotificationDialog(QString title, QString body, QStringList actions, int id, QVariantMap hints, int timeout, QWidget *parent = 0);
    ~NotificationDialog();

    void show();
    void close(int reason);

    void setParams(QString title, QString body);
    void setGeometry(int x, int y, int w, int h);
    void setGeometry(QRect geometry);

    NotificationDBus* dbusParent;

signals:
    void closing(int id, int reason);

private slots:
    void on_pushButton_clicked();

private:
    Ui::NotificationDialog *ui;

    int id;
    int timeout;
    QVariantMap hints;
};

#endif // NOTIFICATIONDIALOG_H