#pragma once
#include <string>
#include "ClassB.h"

class ClassA1
{
private:
    ClassB objectB;
public:
    ClassA1(ClassB);
    std::string getBinfo();
    void setBinfo(std::string);
};
