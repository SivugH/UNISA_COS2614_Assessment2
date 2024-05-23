#ifndef CLSTOREITEM_H
#define CLSTOREITEM_H

#include "Item.h"

class clStoreItem : public clItem
{
public:
    clStoreItem();

private:
    QString getVendor();
    void setVendor();
};

#endif // CLSTOREITEM_H
