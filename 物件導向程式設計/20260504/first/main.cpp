#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#define N 47

using namespace std;

int main()
{

    string id[N],name[N],score1[N],score2[N],score3[N],data;
    int i;
    ifstream file("data.csv");
    if (file.is_open()){
        i=0;
        while (file.eof()==0)
        {
            getline(file,data);
            stringstream token(data);
            getline(token,id[i],',');
            getline(token,name[i],',');
            getline(token,score1[i],',');
            getline(token,score2[i],',');
            getline(token,score3[i]);
            i++;
        }
        //排序
        for (int k=0;k<i-1;k++){
            for (int j=0;j<i-1;j++){
                if (stof(score1[j])<stof(score1[j+1])){
                //對調
                    string tmp;
                    tmp=id[j];id[j]=id[j+1];id[j+1]=tmp;
                    tmp=name[j];name[j]=name[j+1];name[j+1]=tmp;
                    tmp=score1[j];score1[j]=score1[j+1];score1[j+1]=tmp;
                    tmp=score2[j];score2[j]=score2[j+1];score2[j+1]=tmp;
                    tmp=score3[j];score3[j]=score3[j+1];score3[j+1]=tmp;
                }
            }
        }
        system("pause");
        for (int j=0;j<i;j++)

                cout << j+1 << " " << name[j] << " " << id[j] << " " << score1[j] << endl;

        file.close();
    }
    else
        cout << "找不到檔案!" << endl;


    return 0;
}
