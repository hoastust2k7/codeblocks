#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    int n=0;
    string data;
    ifstream file("data.csv");
    if (file.is_open()){
        while (file.eof()==0){
            getline (file,data);
            n++;
        }
        cout << "檔案:" << n << endl;
        file.close();
    }
    else
        cout << "找不到檔案" << endl;
    return 0;
}
