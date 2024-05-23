#ifndef CLITEM_H
#define CLITEM_H

#include <QObject>

class clItem : public QObject
{
    Q_OBJECT
public:
    explicit clItem(QObject *parent = 0);

private:
    QString meID;
    QString meName;
    float mePrice;

signals:

public slots:

};

#endif // CLITEM_H
