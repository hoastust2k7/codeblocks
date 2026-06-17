#include <iostream>

using namespace std;

int main()
{
    int data[]={234,2,34,23,-23};
    int n;

    n=sizeof(data)/sizeof(data[0]);

    for (int i=0;i<n;i++)
        cout << data[i] << " ";
    cout << endl;

    return 0;
}
