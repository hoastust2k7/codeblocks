#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class person
{
     public:
         person();
         virtual ~person();
         string Getname() { return name; }
         void Setname(string val) { name = val; }
         int Getage() { return age; }
         void Setage(int val) { age = val; }
     protected:


     private:
         string name;
         int age;
};
#endif // PERSON_H
