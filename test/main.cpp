#include <iostream>

using namespace std;

int year()

void a004() {
    int date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day, number = 0;
    string week[7] = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};

    cout << "計算1/1/2026至輸入日期天數" << endl;
    cout << "請輸入年：（2026-）" << endl;
    cin >> year;
    cout << "請輸入月：（1-12）" << endl;
    cin >> month;
    cout << "請輸入日期：（1-31）" << endl;
    cin >> day;

    if((year % 4) == 0 && ((year % 100) != 0 || (year % 400) == 0)) { //(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)
        //cout << "閏年" << endl;
        date[1] = 29;
    }
    else {
        //cout << "平年" << endl;
    }
}


int main() {
    a004();
    return 0;
}
