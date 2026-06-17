#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "person.h"


class student : public person {
    public:
        student();
        virtual ~student();

    protected:

    private:
        std::string school;
        std::string className;
        std::string studentID;
};

#endif // STUDENT_H
