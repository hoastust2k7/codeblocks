#include <iostream>

using namespace std;

int main()
{
    int m,d,s;
    cin >> m >> d;

    s=(m*2+d)%3;

    if (s==0)
        cout << "´¶³q" << endl;
    else if (s==1)
        cout << "¦N" << endl;
    else if (s==2)
        cout << "¤j¦N" << endl;
    return 0;
}
