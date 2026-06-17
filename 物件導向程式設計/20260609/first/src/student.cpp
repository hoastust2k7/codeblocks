#include "student.h"


student::student(string s="南臺科技大學", string c="五專資工二甲", float s=0)
{
    //ctor
    schoolName=s;
    className=c;
    score=s;
}
student::~student()
{
    //dtor
}
