#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("score.csv");
    if (file.is_open()){
        cout << "open" << endl;


        file.close();
    }
    else
        cout << "檔案無法開啟" << endl;

    return 0;
}
