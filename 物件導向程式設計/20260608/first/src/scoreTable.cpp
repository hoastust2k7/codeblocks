#include "scoreTable.h"
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

scoreTable::scoreTable(string file)
{
    //讀檔
    ifstream data(file);
    if (data.is_open())
    {
        //計算有幾筆
        n=0;
        string temp;
        while (getline(data,temp)){
            n++;
        }
        //此時的n就是筆數
        //cout << "n=" << n << endl;
        //重新讀檔
        data.clear();  //清除EOF狀態
        data.seekg(0); //移回檔案開頭
        score=new student[n];
        int index=0;
        //把檔案讀出，放到物件中
        while (getline(data,temp)){
            stringstream token(temp);
            string a1,a2,a3;
            getline(token,a1,',');//學號
            getline(token,a2,',');//姓名
            getline(token,a3);    //成績
            score[index].add(a1,a2,a3);
            index++;
        }
        data.close();
    }
    else
        cout << "open file error" << endl;




    //計算有幾筆
}
ostream & operator << (ostream & out, scoreTable &b){
        //姓名 學號 成績
        for (int i=0; i<b.n; i++){
            out << i+1 << " " << b.score[i].getName() << " " << b.score[i].getId() << " " << b.score[i].getScore() << endl;
        }
        return out;
}
scoreTable::scoreTable()
{
    //ctor
}
scoreTable::~scoreTable()
{
    //dtor
    //歸還
    delete [] score;
}
