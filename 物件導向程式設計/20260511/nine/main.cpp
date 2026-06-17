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
    int *data3;
    int i=0,n1,n2;

    n1=sizeof(data1)/sizeof(data1[0]);
    n2=sizeof(data2)/sizeof(data2[0]);
    data3=new int[n1+n2];

    for (int j=n1-1;j>=0;j--)
        data3[i++]=data1[j];


    for (int j=n2-1;j>=0;j--)
        data3[i++]=data2[j];

    printArray(data3,i);

    delete []data3;

    return 0;
}
