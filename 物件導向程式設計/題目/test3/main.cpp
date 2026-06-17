#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float kg,cm,BMI,m;
    cin >> cm >> kg;
    m=cm/100;
    BMI=kg/pow(m,2);
    cout << fixed << setprecision(1);
    cout <<  BMI << endl;
    return 0;
}
