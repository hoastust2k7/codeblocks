#include <iostream>
using namespace std;

int main()
{
    int year, m, d;
    int count = 0;

    int date[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"星期日","星期一","星期二","星期三","星期四","星期五","星期六"};

    cout << "計算2026/1/1至輸入日期天數" << endl;

    cout << "請輸入年份(2026-):";
    cin >> year;

    cout << "請輸入月份(1-12):";
    cin >> m;

    cout << "請輸入日期(1-31):";
    cin >> d;

    // 計算2026到輸入年份之前的天數
    for (int y = 2026;  y < year;  y++)
    {
        if((y%4==0 && y%100!=0) || y%400==0)
            count += 366;
        else
            count += 365;
    }

    // 判斷輸入年份是否為閏年
    if((year%4==0 && year%100!=0) || year%400==0)
        date[1] = 29;

    // 計算當年1/1到輸入月份之前的天數
    for(int i = 0; i < m-1; i++)
        count += date[i];

    // 加上日期
    count += d;
    cout << "總共有" << count << "天 ";
    cout << week[(count-1+4)%7] << endl;



    return 0;
}
