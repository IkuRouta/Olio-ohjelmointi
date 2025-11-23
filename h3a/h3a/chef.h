#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

class Chef {
protected:
    std::string name;

public:
    Chef(std::string nimi) : name(nimi) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    std::string getName() const {
        return name;
    }

    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }
};

#endif
