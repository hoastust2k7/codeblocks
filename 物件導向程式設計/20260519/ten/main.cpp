#include <iostream>

using namespace std;

class ComplexNumber
{
    friend ostream & operator << (ostream &out,const ComplexNumber &x);
    friend istream & operator >> (istream & in, ComplexNumber &x);
    float a,b;   //a+bi

public:
    ComplexNumber (int x=0.0, int y=0.0)
    {
       a=x;
       b=y;
    }
    ComplexNumber operator +(ComplexNumber y){
        return ComplexNumber (a+y.a,b+y.b);
    }
    ComplexNumber operator -(ComplexNumber y){
        return ComplexNumber (a-y.a,b-y.b);
    }
    ComplexNumber operator *(ComplexNumber y){
        return ComplexNumber
                (
                    a*y.a-b*y.b,
                    a*y.b+b*y.a
                );
    }
    ComplexNumber operator /(ComplexNumber y){
        float d=y.a*y.a+y.b*y.b;
        return ComplexNumber
                (
                    (a*y.a+b*y.b)/d,
                    (b*y.a-a*y.b)/d
                );
    }
    bool operator == (ComplexNumber y){   //耞ㄢ狡计琌
        return (a==y.a && b==y.b);
    }
    bool operator != (ComplexNumber y){   //耞ㄢ狡计琌
        return !(a==y.a && b==y.b);
    }
};
//operator +,-,*,/,<<,>>,........
istream & operator >> (istream &in, ComplexNumber &x){
    in >> x.a >> x.b;  // = cin >> a >> b
    return in;
}
// operator << 龟
ostream & operator << (ostream &out,const ComplexNumber &x)
{
    // r=o
    if (x.a==0)  // 狦龟场0
    {
        if (x.b==0)
            out << x.a << endl;
        else
            if (x.b>0)  // 狦店场0
                out << x.b << "i" << endl;  // 0
            else   // 狦店场ぃ0  ex. i=5
                out << x.b << "i" << endl;  // 5i
    }
        else
        {
            if (x.b==0)   // 狦店场0
                out << x.a << endl;  //龟场
            else {
                if (x.b>0)
                        out << x.a << "+" << x.b << "i" << endl;
                else
                        out << x.a << x.b << "i" << endl;
                    }
            }
    return out;
}



int main()
{
    ComplexNumber a,b,c;
    cin >> a;
    cin >> b;
    c=a+b;
    cout << "猭:" << c;
    c=a-b;
    cout << "搭猭:" << c;
    c=a*b;
    cout << "猭:" << c;
    c=a/b;
    cout << "埃猭:" << c;
    if (a==b)
        cout << "a,b" << endl;
    else
        cout << "a,bぃ" << endl;
     if (a!=b)
      cout<<"a,b ぃ单!"<<endl;
   else
         cout<<"a,b单!"<<endl;

    return 0;
}
