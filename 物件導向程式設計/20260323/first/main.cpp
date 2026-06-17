#include <iostream>

using namespace std;

int main()
{
    int a=0;

    if(a)
        cout << "1";
    else
        cout << "0";

    a=1;
    if (a)
        cout << "1";
    else
        cout << "0";

    if(a=0)
        cout << "1";
    else
        cout << "0";

    if (a=1)
        cout << "1";
    else
        cout << "0";

    return 0;
}
