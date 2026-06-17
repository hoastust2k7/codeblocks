#ifndef SCORETABLE_HPP
#define SCORETABLE_HPP
#include <iostream>
#include <string>
#include <fstream>
#include "person.hpp"
#include "student.hpp"

class scoreTable {
friend std::ostream& operator<<(std::ostream& out, scoreTable& b);
public:
    scoreTable();
    scoreTable(std::string file);
    virtual ~scoreTable();

protected:

private:
    int arrCount;
    std::string title;
    student *score;
};


#endif // SCORETABLE_HPP