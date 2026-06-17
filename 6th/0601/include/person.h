#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class person {
    friend std::istream & operator >> (std::istream &input, person &a);
    friend std::ostream & operator << (std::ostream &output, person &a);
    public:
        person();
        virtual ~person();

    protected:

    private:
        std::string studentName;
        std::string studentID;
        std::string cellPhone;
};

#endif // PERSON_H
