

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

// 顯示資料
void print(string id[], string name[], string score1[],
           string score2[], string score3[], int n)
{
    //cout << "學號\t姓名\t國文\t英文\t數學\t平均" << endl;

    for (int i = 0; i < n; i++)
    {
        float avg = (stof(score1[i]) +
                     stof(score2[i]) +
                     stof(score3[i])) / 3;

        cout << id[i] << " \t"
             << name[i] << " \t"
             << score1[i] << " \t"
             << score2[i] << " \t"
             << score3[i] << " \t"
             << fixed << setprecision(1)
             << avg << endl;
    }
}

// 排序(由高到低)
void sorting(string id[], string name[], string score1[],
             string score2[], string score3[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            float avg1 = (stof(score1[j]) +
                          stof(score2[j]) +
                          stof(score3[j])) / 3;

            float avg2 = (stof(score1[j + 1]) +
                          stof(score2[j + 1]) +
                          stof(score3[j + 1])) / 3;

            if (avg1 < avg2)
            {
                // id交換
                string temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;

                // name交換
                temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;

                // score1交換
                temp = score1[j];
                score1[j] = score1[j + 1];
                score1[j + 1] = temp;

                // score2交換
                temp = score2[j];
                score2[j] = score2[j + 1];
                score2[j + 1] = temp;

                // score3交換
                temp = score3[j];
                score3[j] = score3[j + 1];
                score3[j + 1] = temp;
            }
        }
    }
}

// 計算平均
float average(string data[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += stof(data[i]);
    }

    return sum / n;
}

int main()
{
    ifstream file("score.csv");

    string data;

    // 先計算筆數
    int n = 0;

    while (getline(file, data))
    {
        n++;
    }

    // 回到檔案開頭
    file.clear();
    file.seekg(0);

    // 動態配置空間
    string id[n], name[n], score1[n], score2[n], score3[n];

    int i = 0;

    while (getline(file, data))
    {
        stringstream ss(data);

        getline(ss, id[i], ',');
        getline(ss, name[i], ',');
        getline(ss, score1[i], ',');
        getline(ss, score2[i], ',');
        getline(ss, score3[i], ',');

        i++;
    }

    file.close();

    // 排序
    sorting(id, name, score1, score2, score3, n);

    // 輸出
    print(id, name, score1, score2, score3, n);

    // 各科平均
    cout << endl;


    cout << "數學平均: "
         << fixed << setprecision(1)
         << average(score3, n) << endl;

    return 0;
}

