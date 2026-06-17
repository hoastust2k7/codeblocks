#include <iostream>

using namespace std;

void first() {
    int date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day, count = 0;
    string week[7] = {"星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六"};
    cout << "計算1/1至輸入日期天數" << endl;
    cout << "請輸入日期的月期：（1-12）" << endl;
    cin >> month;
    cout << "請輸入日期的日期：（1-31）" << endl;
    cin >> day;

    for(int i = 0; i < month - 1; i++) {
        count = count + date[i];
    }
    //count = count + day;
    cout << "總共有" << count << "天" << "（" << week[(count + 4 - 1) % 7] << "）" << endl;
}

void second() {




}

int main()
{
    first();
    return 0;
}
