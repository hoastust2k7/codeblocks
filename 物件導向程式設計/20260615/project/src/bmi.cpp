#include "bmi.h"
#include <string>
#include <iostream>

using namespace std;


bmi::bmi(string aa, float bb, float cc, int dd)
{
         //ctor
         Setname(aa);
         h=bb;
         w=cc;
         Setage(dd);
}
bmi::~bmi()
{
 //dtor
}
istream & operator >> (istream &in, bmi &bb){
     string tmp;
     int tmpa;
     cout << "name:";
     in >> tmp;
     bb.Setname(tmp);
     cout << "age:";
     in >> tmpa;
     bb.Setage(tmpa);
     cout << "height(cm):";
     in >> bb.h;
     cout << "weight(kg):";
     in >> bb.w;
     bb.b=bb.w/(bb.h/100)/(bb.h/100);
     return in;
    }
ostream & operator << (ostream &out, bmi &bb){
         out << "name=" << bb.Getname() << ", age=" << bb.Getage() << endl;
         out << "height=" << bb.Geth() << "cm, weight=" << bb.Getw() << "kg, BMI=" << bb.Getb() << endl;
 return out;
}
