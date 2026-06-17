#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream score("score.csv");
    int t;
    string data;
    cout << "輸入條件:(幾分以下)";
    cin >> t;
    if (score.is_open()){
        while (score.eof()==0){
            getline (score,data);
            stringstream token(data);
            string id, name, score1, score2, score3;
            getline(token,id,',');
            getline(token,name,',');
            getline(token,score1,',');
            getline(token,score2,',');
            getline(token,score3);
            if (stof(score3)>=t){
                cout << "name=" << name << " id=" << id << " score=" << score3 << endl;
            }
        }

        score.close();
    }
    else
        cout << "檔案找不到" << endl;
    return 0;
}
