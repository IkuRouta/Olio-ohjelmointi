#include "Wheel.h"

Wheel::Wheel() : size(0), type("") {}

Wheel::Wheel(int s, const string &t) : size(s), type(t) {}

int Wheel::getSize() const {
    return size;
}

string Wheel::getType() const {
    return type;
}

void Wheel::setSize(int s) {
    size = s;
}

void Wheel::setType(const string &t) {
    type = t;
}
