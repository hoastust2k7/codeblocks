#ifndef STUDENT_H
#define STUDENT_H

#include <person.h>


class student : public person
{

    public:
        student::student(string s="南臺科技大學", string c="五專資工二甲", float s=0);
        virtual ~student();
        void add(string i,string n,string s){
            setId(i);
            setName(n);
            score=stof(s);
        }
        float getScore(){
                return score;
        }
        string getschoolName(){
            return schoolName;
        }
        string getclasslName(){
            return className;
        }
        bool operator > (student &b){
            return (score > b.getScore());
        }
        bool operator < (student &b){
            return (score < b.getScore());
        }
        student operator=( student &b){
            person::operator=(b);
            schoolName=b.schoolName;
            className=b.className;
            score=b.score;
            return *this;
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
