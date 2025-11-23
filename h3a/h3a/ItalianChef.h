#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <iostream>

class ItalianChef : public Chef {
public:
    ItalianChef(std::string nimi) : Chef(nimi) {
        std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
    }

    ~ItalianChef() {
        std::cout << "ItalianChef " << name << " destruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Italian Chef " << name << " makes pasta" << std::endl;
    }
};

#endif
