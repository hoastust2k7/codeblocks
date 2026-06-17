#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("test.dat");

    if (file.is_open())
        cout << "檔案開啟成功!" << endl;
    else
        cout << "檔案不存在!" << endl;
    return 0;
}
