#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


using namespace std;

int main()
{
    system("pause");
    ifstream file("E:\\物件導向程式設計\\20260330\\second\\Preview_Data.csv");
    string data;
    string countycode; //區域碼
    string organizationname; //單位名稱
    string organizationaddress;//地址
    string organizationtel; //電話
    string site;


    if (file.is_open()){
        getline(file,data); //把第一個欄位讀出，捨棄
        cout << "你要找哪個縣市清潔隊:";
        cin >> site;
        while (file.eof()==0){
            getline(file,data);

            stringstream token(data);
            getline(token,countycode,','); //解出區域碼
            getline(token,organizationname,','); //解出單位名稱
            getline(token,organizationaddress,',');//解出地址
            getline(token,organizationtel,','); //解出電話
            if (organizationaddress.find(site) != string::npos || organizationname.find(site) != string::npos){
            //cout << "區域碼:" << countycode << endl;
            cout << "單位名稱:" << organizationname << " ";
            cout << "地址:" << organizationaddress << " ";
            cout << "電話:" << organizationtel << endl;

        }
        }

        file.close();
    }
    else
        cout << "File Not Found!" << endl;

    return 0;
}
