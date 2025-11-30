#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel();
    Wheel(int s, const string& t);

    int getSize() const;
    string getType() const;

    void setSize(int s);
    void setType(const string& t);
};

#endif
