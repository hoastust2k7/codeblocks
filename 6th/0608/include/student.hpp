#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>
#include <string>
#include "person.hpp"

class student : public person {
public:
    student();
    virtual ~student();
    void add(std::string id, std::string name, std::string c) {
        setId(id);
        setName(name);
        score = std::stoi(c);
    }
    float getScore() {
        return score;
    }

protected:

private:
    std::string schoolName;
    std::string className;
    float score;    
};

#endif // STUDENT_HPP