#include "Vendor.h"

clVendor::clVendor(QObject *parent) :
    QObject(parent)
{
}

QString clVendor::getVendorName()
{
 return "testing getVendorName()";
}
