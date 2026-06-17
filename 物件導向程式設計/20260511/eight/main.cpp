#include <iostream>

using namespace std;



void printArray(int array[], int n)
{
    for (int i=0;i<n;i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int data1[]={34,45,-45,213,23,-134};
    int data2[]={90,-34,45,678,-45,22,345,2,10};
    int data3[15];
    int i=0,n;

    n=sizeof(data1)/sizeof(data1[0]);
    for (int j=n-1;j>=0;j--)
        data3[i++]=data1[j];

    n=sizeof(data2)/sizeof(data2[0]);
    for (int j=n-1;j>=0;j--)
        data3[i++]=data2[j];

    printArray(data3,i);

    return 0;
}
