#include <iostream>

using namespace std;

int main()
{
    string data="12.3";
    cout << stoi(data)+10.1 << endl;
    cout << stof(data)+10.1 << endl;
    return 0;
}
