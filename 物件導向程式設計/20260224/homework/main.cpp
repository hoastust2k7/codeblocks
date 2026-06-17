#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    double D;


    cout << "解一元二次方程式，請輸入a:";
    cin >> a;
    cout << "請輸入b:";
    cin >> b;
    cout << "請輸入c:";
    cin >> c;

    D=b*b-4*a*c;

    double x1=((-b)+sqrt(D))/(2*a);
    double x2=((-b)-sqrt(D))/(2*a);

    cout << "2x^2+3x+-5=0的兩個根是" << endl;

    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;
    return 0;
}
