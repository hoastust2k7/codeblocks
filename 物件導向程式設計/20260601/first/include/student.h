#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <person.h>
using namespace std;




class student : public person
{
    public:
        student();
        virtual ~student();

    protected:

    private:
        string school;
        string number;
        string classname;
};

#endif // STUDENT_H
