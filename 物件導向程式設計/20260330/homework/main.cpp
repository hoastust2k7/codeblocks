#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


using namespace std;

int main()
{

    ifstream file("E:\\物件導向程式設計\\20260330\\homework\\Preview_Data.csv");
    string data;
    string site,date;
    string sitename;  //測站名稱
    string uvi; //紫外線指數
    string unit; //發布單位
    string county;  //縣市
    string wgs84_lon; // WGS84經度
    string wgs84_lat; //WGS84緯度
    string datacreationdate; //資料發佈時間

    if (file.is_open()){
        getline(file,data); //把第一個欄位讀出，捨棄
        cout << "請輸入查詢地點:";
        cin >> site;
        cout << "請輸入查詢日期:";
        cin >> date;
        while (file.eof()==0){
            getline(file,data);

            stringstream token(data);
            getline(token,sitename,',');
            getline(token,uvi,',');
            getline(token,unit,',');
            getline(token,county,',');
            getline(token,wgs84_lon,',');
            getline(token,wgs84_lat,',');
            getline(token,datacreationdate);
            if (county.find(site) != string::npos && datacreationdate.find(date) != string::npos){
            //cout << "區域碼:" << countycode << endl;
            cout << "測站名稱:" << sitename << " ";
            cout << "紫外線指數:" << uvi << " ";
            cout << "發布單位:" << unit << " ";
            cout << "縣市:" << county << " ";
            cout << "WGS84經度:" << wgs84_lon << " ";
            cout << "WGS84緯度:" << wgs84_lat << " ";
            cout << "資料發佈時間:" << datacreationdate << endl;

        }
        }

        file.close();
    }
    else
        cout << "File Not Found!" << endl;

    system("pause");
    return 0;
}
