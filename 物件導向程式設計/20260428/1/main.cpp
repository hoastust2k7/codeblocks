#include <iostream>
#include <fstream>


using namespace std;

int main(int argc, char** argv) {
    string name;
    string id;
    ofstream my("name.txt");
    cout<<"請輸入姓名";

    cin >> name; // 將輸入姓名存入陣列name中

    my << name; //將陣列name存入檔案中

    cout << "請輸入學號";

    cin >> id;

    my << " " << id;

    my.close();//關閉檔案
    return 0;
}
