#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class person
{
    friend istream & operator >> (istream &in, person &a);
    friend ostream & operator << (ostream &out, person &a);
    public:
        person();
        virtual ~person();

    protected:

    private:
        string name;
        string id;
        string call;
};

#endif // PERSON_H
