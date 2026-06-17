#ifndef BMI_H
#define BMI_H
#include <person.h>
#include <string>
#include <iostream>


class bmi : public person
{
     friend istream & operator >> (istream &in, bmi &b);
     friend ostream & operator << (ostream &out, bmi &b);

     public:
     bmi(string aa, float bb, float cc, int dd=17);
     virtual ~bmi();
     float Geth() { return h; }
     void Seth(float val) { h = val; }
     float Getw() { return w; }
     void Setw(float val) { w = val; }
     float Getb() { return b; }
     void Setb(float val) { b = val; }
     void Setage(int x) { person :: Setage(x);}


     protected:

     private:
     float h; //height
     float w; //weight
     float b; //bmi
};
#endif // BMI_H
