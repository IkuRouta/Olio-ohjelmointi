#include <iostream>
#include <memory>


class Animal {
public:

    virtual void callOut() const {
        std::cout << "An animal is making weird noises" << std::endl;
    }

    virtual ~Animal() = default;
};


class Dog : public Animal {
public:

    void callOut() const override {
        std::cout << "Dog barks!" << std::endl;
    }

    ~Dog() override = default;
};

int main() {

    Animal a;
    Dog d;

    a.callOut();
    d.callOut();

    std::unique_ptr<Animal> polyDog = std::make_unique<Dog>();
    polyDog->callOut();

    return 0;
}
