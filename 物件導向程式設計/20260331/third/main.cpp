#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ifstream file("score.csv");
    string data,id,name,score;
    float query;
    int find=0;

    cout<<"請輸入想查詢低於幾分的學生成績:";
    cin>>query;

    if (file.is_open())
    {
        getline(file,data); //標頭捨棄
        while (file.eof()==0)
        {
            getline(file,data);
            //data=5b3g0001,薛羽涵,38.7
            stringstream token(data);
            getline(token, id,','); //id=5b3g0001
            getline(token, name,','); //name=薛羽涵
            getline(token,score); //score=38.7
            if (query>stof(score))
            {
                cout<<name<<"("<<id<<")考"<<score<<endl;
                find=1;
            }
        }
        if (find==0)
            cout<<"查無此人!"<<endl;
        file.close();
    }
    else
        cout<<"File not found!"<<endl;

            return 0;
}
