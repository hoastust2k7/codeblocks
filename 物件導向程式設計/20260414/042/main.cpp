#include <iostream>

using namespace std;

int main()
{
    int n;
    int price;

    cin >> n;

    if (n%12==0)
        price=50*(n/12);
    else{
        price=(5*(n%12))+(50*(n/12));
    }
    cout << price << endl;


    return 0;
}
