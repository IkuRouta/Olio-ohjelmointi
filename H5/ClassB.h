#pragma once
#include <string>

class ClassB
{
private:
    std::string info;
public:
    ClassB();
    std::string getInfo() const;
    void setInfo(const std::string &value);
};
