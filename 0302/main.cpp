#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void first() {
    float weight, height, bmi;

    cout << "========BMI計算程式========\n";
    cout << "輸入你的身高（單位：公尺）：";
    cin >> height;

    cout << "輸入你的體重（單位：公斤）：";
    cin >> weight;

    cout << fixed << setprecision(1);
    bmi = (weight / (height*height));
    cout << "你的BMI是：" << bmi << endl;
}

void second() {
    float weight1, height1, bmi1;

    cout << "========BMI計算程式========\n";
    cout << "輸入你的身高（單位：公尺）：";
    cin >> height1;
    cout << "輸入你的體重（單位：公斤）：";
    cin >> weight1;

    cout << fixed << setprecision(1);
    bmi1 = (weight1 / (height1*height1));

    cout << "你的BMI是：";
    if(bmi1 >= 18.5 && bmi1 < 24) {
        cout << bmi1 << " >> 正常範圍" << endl;
    } else if(bmi1 >= 24 && bmi1 < 27) {
        cout << bmi1 << " >> 異常範圍 >>> 過重！" << endl;
    } else if(bmi1 >= 27 && bmi1 < 30) {
        cout << bmi1 << " >> 異常範圍 >>> 輕度肥胖！" << endl;
    } else if(bmi1 >= 30 && bmi1 < 35) {
        cout << bmi1 << " >> 異常範圍 >>> 中度肥胖！" << endl;
    } else if(bmi1 >= 35) {
        cout << bmi1 << " >> 異常範圍 >>> 重度肥胖！" << endl;
    }
    else {
        cout << bmi1 << " >> 體重過輕" << endl;
    }
}

void homework() {
    int n = 6;
    for(int i = 1; i <= n; i++) {
        cout << "第" << i << "次" << endl;
        second();
    }
}

int main()
{
    //first();
    //second();
    homework();
    return 0;
}
