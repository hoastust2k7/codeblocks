#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream file("Preview_Data.csv");
    string data;
    string field1,field2,field3,field4,field5;

    if (file.is_open())
        {
            getline(file,data);
            while (file.eof()==0){
                getline(file,data);
                stringstream token(data);

                getline(token,field1,',');
                getline(token,field2,',');
                getline(token,field3,',');
                getline(token,field4,',');
                getline(token,field5,',');

                cout << "field1=" << field1 << endl;
                cout << "field2=" << field2 << endl;
                cout << "field3=" << field3 << endl;
                cout << "field4=" << field4 << endl;
                cout << "field5=" << field5 << endl;
        }
        file.close();
    }
    else
        cout<<"找不到檔案!"<< endl;


    return 0;
}
