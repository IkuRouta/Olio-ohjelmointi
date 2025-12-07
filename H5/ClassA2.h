#pragma once
#include <string>
#include "ClassB.h"

class ClassA2
{
private:
    ClassB &refB;
public:
    ClassA2(ClassB &);
    std::string getBinfo();
    void setBinfo(std::string);
};
