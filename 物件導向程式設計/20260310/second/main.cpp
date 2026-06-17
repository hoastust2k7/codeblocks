#include <iostream>

using namespace std;

int main()
{
    int n;
    int a,b,c,d;


    cin >> n;
    for (int i=0; i<n ;i++){
        cin >> a >> b >> c >> d;

        if ((b-a)==(c-b) && (c-b)==(d-c))
            cout << a << " " << b << " " << c << " " << d << " " << d+(d-c) << endl;
        else if ((b/a)==(c/b) && (c/b)==(d/c))
            cout << a << " " << b << " " << c << " " << d << " " << d*(d/c) << endl;
        return 0;
    }
}
