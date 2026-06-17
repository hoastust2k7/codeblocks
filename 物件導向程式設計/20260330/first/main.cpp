#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string data;
    ifstream file("E:\\物件導向程式設計\\20260330\\first\\Preview_Data.csv");
    if (file.is_open()){
            while (file.eof()==0){
                getline(file,data);
                stringstream token(data);
                cout << data << endl;
            }
        file.close();
    }
    else
        cout << "File Not Found" << endl;
    return 0;
}
