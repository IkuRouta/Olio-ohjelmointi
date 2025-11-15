#ifndef STUDENTS_H
#define STUDENTS_H


#include <string>


class Student {
private:
    std::string name;
    int studentNumber{};
    double average{};


public:

    void setName(const std::string& n);
    void setStudentNumber(int n);
    void setAverage(double a);


    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};


#endif // STUDENTS_H
