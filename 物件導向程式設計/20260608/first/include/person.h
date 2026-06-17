#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;


class person
{
    public:
        person();
        virtual ~person();
        void setName(string a){
            name=a;
        }
        void setId(string a){
            id=a;
        }
        void seta(int a){
            age=a;
        }
        string getName(){
            return name;
        }
        string getId(){
            return id;
        }
        int getAge(){
            return age;
        }

    protected:

    private:
        string name;
        int age;
        string id;
};

#endif // PERSON_H
