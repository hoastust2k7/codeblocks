#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    int x1,x2,temp;

    cin >> a >> b >> c;

    temp=pow(b,2)-4*a*c;
    if (temp==0){
        x1=-b/(2*a);
        cout << "Two same roots x=" << x1 << endl;
    }
    else if (temp>0){
        x1=(-b+sqrt(temp))/(2*a);
        x2=(-b-sqrt(temp))/(2*a);
        if (x1>x2)
            cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
        else
            cout << "Two different roots x1=" << x2 << " , x2=" << x1 << endl;
    }
    else
        cout << "No real root" << endl;
    return 0;
}
