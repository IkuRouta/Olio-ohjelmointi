#include <iostream>
#include <string>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

using namespace std;

int main()
{
    int a = 5;

    cout << "a:n arvo on: " << a
         << " ja osoite on: " << &a << endl;

    int *pointerA = &a;

    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;

    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;

    refA = b;

    pointerA = &b;

    cout << "\nVertailua:\n";
    cout << "a: arvo = " << a << ", osoite = " << &a << endl;
    cout << "b: arvo = " << b << ", osoite = " << &b << endl;
    cout << "refA: arvo = " << refA << ", &refA = " << &refA << endl;
    cout << "pointerA: osoite = " << pointerA
         << ", *pointerA = " << *pointerA << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "\nClassA1-testit (kopio):\n";
    cout << "objB:   " << objB.getInfo() << endl;
    cout << "objA1:  " << objA1.getBinfo() << endl;

    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");

    cout << "\nClassA2-testit (referenssi):\n";
    cout << "objB:   " << objB.getInfo() << endl;
    cout << "objA2:  " << objA2.getBinfo() << endl;

    cout << endl;
    return 0;
}
