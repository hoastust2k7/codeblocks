#include <iostream>

 using namespace std;
int main(int argc, char** argv) {
    int month;
    int month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"月份:";
    cin >> month;
    cout<<month<<"月"<< month_day[month-1]<<"天"<<endl;

    return 0;
}
