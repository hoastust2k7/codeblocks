#include <iostream>
#include <fstream>
#include <string>
#include <ostream>
#include "include/person.hpp"
#include "include/scoreTable.hpp"
#include "include/student.hpp"


int main(int argc, char* argv[]) {
    scoreTable a("data.csv");
    std::cout << a;
    // std::cout << "hello world" << std::endl;
    return 0;
}