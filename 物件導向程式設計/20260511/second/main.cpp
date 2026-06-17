#include <iostream>

using namespace std;

int data[]={234,2,34,23,-23};
int n;

void printArray()
{
    for (int i=0;i<n;i++)
        cout << data[i] << " ";
    cout << endl;
}

int main()
{


    n=sizeof(data)/sizeof(data[0]);

    printArray();

    return 0;
}
