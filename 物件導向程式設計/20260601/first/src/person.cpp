#include "person.h"

person::person()
{
    //ctor
}

person::~person()
{
    //dtor
}

istream & operator >> (istream &in, person &a){
    cout << "name:";
    in >> a.name;
    cout << "id:";
    in >> a.id;
    cout << "call:";
    in >> a.call;
    return in;

}
ostream & operator << (ostream &out, person &a)
{
    out << "name:" << a.name << " ";
    out << "id:" << a.id << " ";
    out << "call:" << a.call << endl;
    return out;
}
