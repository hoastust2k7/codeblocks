#include "../include/student.h"

student::student() {
    //ctor
    // std::cout << "5";
}

student::~student() {
    //dtor
    // std::cout << "6";
}

std::istream & operator >> (std::istream &input, person &a) {
    std::cout << "Name: ";
    input >> a.studentName;
    std::cout << "ID: ";
    input >> a.studentID;
    std::cout << "Cell Phone: ";
    input >> a.cellPhone;
    return input;
}

std::ostream & operator << (std::ostream &output, person &a) {
    output << "Name: " << a.studentName;
    output << ", ID: " << a.studentID;
    output << ", Cell Phone: " << a.cellPhone;
    return output;
}
