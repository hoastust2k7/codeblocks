#include <iostream>

using namespace std;



void printArray(int array[], int n)
{
    for (int i=0;i<n;i++)
        cout << array[i] << " ";
    cout << endl;
}
void sorting(int data[],int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-i-1;j++)
            if (data[j]>data[j+1])
            {
                int tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;

            }
}

int main()
{
    int data[]={234,2,34,23,-23};
    int n;

    n=sizeof(data)/sizeof(data[0]);

    printArray(data,n);

    sorting(data,n);
    printArray(data,n);

    return 0;
}
