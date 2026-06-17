#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("myFile.txt");

    file << "這是我第一個檔案!" << endl;
    file.close();

    return 0;
}
