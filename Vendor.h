#ifndef VENDOR_H
#define VENDOR_H

#include <QObject>

class clVendor : public QObject
{
    Q_OBJECT
public:
    explicit clVendor(QObject *parent = 0);

    QString getVendorName();

private:
    QString meName;
    QString meAddress;
    QString meID;

signals:

public slots:

};

#endif // VENDOR_H
