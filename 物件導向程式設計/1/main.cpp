#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    int a;  // 整數 a
    int b; //  整數 b
    cin >> a;  // 輸入整數並讀取，存入 a
    cin >> a >> b;   // 輸入兩個整數(兩數之間以逗號隔開)，分別存入a、b
    cout << a << endl;  // 輸出 a 的資料顯示在螢幕上
    cout << "結果為" << b << endl;  // 輸出的中文字用""標示


    if (a < 2){
        cout << "1" << endl;
    }
    else if (a < 1){
        cout << "0" << endl;
    }
    else{
        cout << "I don't know!" << endl;
    }
    return 0;
}
