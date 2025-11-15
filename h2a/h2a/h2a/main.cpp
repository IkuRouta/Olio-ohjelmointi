#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Students.h"


int main() {
    Car c;
    c.setBrand("Lada");
    c.setModel("Samara");
    c.setYearModel(1983);
    c.printData();


    Rectangle* r = new Rectangle();
    r->setWidth(3.2);
    r->setHeight(1.6);
    std::cout << "Rectangle area: " << r->getArea() << '\n';
    std::cout << "Rectangle circum: " << r->getCircum() << '\n';
    delete r;


    std::unique_ptr<Student> s = std::make_unique<Student>();
    s->setName("Perttu Pantiton");
    s->setStudentNumber(123456);
    s->setAverage(3.7);


    std::cout << "Student name: " << s->getName() << '\n';
    std::cout << "Student number: " << s->getStudentNumber() << '\n';
    std::cout << "Student average: " << s->getAverage() << '\n';


    return 0;
}
