#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    double y;

    cout << "½Ð¿é¤Jx=";
    cin >> x;

    y=sqrt((x*x*x+2*x+5)/(6*x+1));
    cout << "x=" << x <<  endl;
    cout << "y=" << y <<  endl;
    return 0;
}
