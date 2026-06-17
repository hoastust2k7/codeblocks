#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int data;
    ifstream my("test.dat");

    if (my.is_open()){
        while (my.eof()!=1){
            my >> data;
            cout << data << endl;
        }
        my.close();
    }
    else
        cout << "檔案不存在!" << endl;
    return 0;
}
