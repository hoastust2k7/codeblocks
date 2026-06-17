#include <iostream>

using namespace std;

int main()
{
    int date[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int month, count=0;
    cout << "輸入月份:";
    cin >> month;
    for  (int i=0;i<month-1; i++){
        count=count+date[i];
    }
    cout << "總共有" << count << "天" << endl;
    return 0;
}
