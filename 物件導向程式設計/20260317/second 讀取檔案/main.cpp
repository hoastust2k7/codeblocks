#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int data;
    ifstream file("first.txt");

    file >> data;
    cout << "檔案內容是" << data << endl;
    file.close();
    return 0;
}
