#include "ClassB.h"

ClassB::ClassB()
{
    info = "";
}

std::string ClassB::getInfo() const
{
    return info;
}

void ClassB::setInfo(const std::string &value)
{
    info = value;
}
