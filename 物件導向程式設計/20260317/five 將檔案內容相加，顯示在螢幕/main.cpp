#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b;
    ifstream myFile("test.dat");
    myFile >> a;
    myFile >> b;

    cout << a << "+" << b << "=" << a+b << endl;
    return 0;
}
