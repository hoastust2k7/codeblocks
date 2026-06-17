#include <iostream>

using namespace std;

int main()
{
    int m,d,count=0,week2;
    int date[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string week[7]={"星期日","星期一","星期二","星期三","星期四","星期五","星期六"};
    cout << "計算1/1至輸入日期天數" << endl;
    cout << "請輸入日期的月份:(1-12):";
    cin >> m;
    cout << "請輸入日期的日期:(1-31):";
    cin >> d;

    for  (int i=0;i<m-1; i++)
        count=count+date[i];

    count=count+d;
    cout << "總共有" << count << "天 ";
    cout << week[(count+5-1)%7] << endl;
    return 0;
}
