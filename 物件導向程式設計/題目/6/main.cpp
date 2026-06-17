#include <iostream>
#include <fstream>


using namespace std;

int main(int argc, char** argv) {
    string name;
    ofstream my("name.txt");
    cout<<"請輸入姓名";

    cin >> name; // 將輸入姓名存入陣列name中

    my << name; //將陣列name存入檔案中

    my.close();//關閉檔案
    return 0;
}
