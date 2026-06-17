#ifndef STUDENT_H
#define STUDENT_H

#include <person.h>


class student : public person
{
    public:
        student();
        virtual ~student();
        void add(string i,string n,string s){
            setId(i);
            setName(n);
            score=stof(s);
        }
        float getScore(){
                return score;
        }


        string GetschoolName() { return schoolName; }
        void SetschoolName(string val) { schoolName = val; }

    protected:

    private:
        string schoolName;
        string className;
        float score;
};

#endif // STUDENT_H
