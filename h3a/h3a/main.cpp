#include "Chef.h"
#include "ItalianChef.h"

int main() {
    {
        Chef chef1("Gordon Ramsay");
        chef1.makeSalad();
        chef1.makeSoup();
    }

    std::cout << std::endl;

    {
        ItalianChef ic("Anthony Bourdain");
        ic.makeSalad();
        ic.makeSoup();
        ic.makePasta();
    }

    return 0;
}
