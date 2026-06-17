#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string data,person;
    string id,name,score;
    int f;
    ifstream file("E:\\物件導向程式設計\\20260324\\first\\score.csv");
    cout << "請輸入要查詢的名字:";
    cin >> person;
    if (file.is_open())
    {
        while (file.eof()==0)
        {
            getline(file,data);
            stringstream token(data);
            getline(token,id,',');
            getline(token,name,',');
            getline(token,score,',');
            if (name==person)
            {
                f=1;
                cout << name << "這次考" << score << "分" <<endl;
                if (stof(score)>=60)
                    cout << "考得不錯!" << endl;
                else
                    cout << "要繼續加油歐!" << endl;
            }

        }
        if (f==0)
        {
            cout << "查無此人" << endl;
        }
        file.close();
    }
    else
        cout << "找不到檔案" << endl;
    return 0;
}

