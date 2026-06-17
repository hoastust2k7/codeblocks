#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float kg,cm,BMI,m;
    cout << "BMI計算程式" << endl;
    cout << "請輸入你的身高(cm):";
    cin >> cm;
    cout << "請輸入你的體重(kg):";
    cin >> kg;
    cout << "你的身高:" << cm << "cm" << endl;
    cout << "你的體重:" << kg << "kg" << endl;

    cout << endl;
    m=cm/100;
    BMI=kg/pow(cm/100,2);
    cout << fixed << setprecision(2);
    cout << "你的BMI為:" << BMI << endl;

    if (BMI<18.5)
        cout << "你的體重過輕:";
    if (18.5<=BMI && BMI<24)
        cout << "你的體重正常:";
    if (BMI>=24 && BMI<27)
        cout << "你的體重過重:";
    if (BMI>=27 && BMI<30)
        cout << "你屬於輕度肥胖:";
    if (BMI>=30 && BMI<35)
        cout << "你屬於中度肥胖:";
    if (BMI>=35)
        cout << "你屬於重度肥胖:";


    return 0;
}
