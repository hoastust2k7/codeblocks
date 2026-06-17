#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double income;
    cin >> income;
    double tax=0;

    if (income <= 370000){
        tax=income*0.06;
    }
    else if (income > 370000 && income <= 990000 ){
        tax=370000*0.06+(income-370000)*0.13;
    }
    else if (income > 990000 && income <=1980000){
        tax=370000*0.06+(990000-370000)*0.13+(income-990000)*0.21;
    }
    else if (income >1980000 && income <=3720000){
        tax=370000*0.06+(990000-370000)*0.13+(1980000-990000)*0.21+(income-1980000)*0.3;
    }
    else if (income >3720000){
        tax=370000*0.06+(990000-370000)*0.13+(1980000-990000)*0.21+(3720000-1980000)*0.3+(income-3720000)*0.4;
    }

    cout << fixed << "稅=" << setprecision(2) << tax << endl;
    return 0;
}
