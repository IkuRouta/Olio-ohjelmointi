#include <iostream>
#include <vector>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car(std::string b, std::string m, int y)
        : brand(b), model(m), yearModel(y) {}

    void printData() const {
        std::cout << "Brand: " << brand
                  << ", Model: " << model
                  << ", Year: " << yearModel << std::endl;
    }
};

int main() {
    std::vector<Car> carList;

    carList.emplace_back("Volvo", "242", 1979);
    carList.emplace_back("Nissan", "Bluebird", 1989);
    carList.emplace_back("Volvo", "C70", 1998);

    std::cout << "Second car in the list:" << std::endl;
    carList[1].printData();

    std::cout << "\nAll cars in the list:" << std::endl;
    for (const auto &car : carList) {
        car.printData();
    }

    return 0;
}
