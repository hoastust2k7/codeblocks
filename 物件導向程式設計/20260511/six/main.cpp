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
    int data1[]={34,45,-45,213,23,-134};
    int data2[]={90,-34,45,678,-45,22,345,2,10};
    int n;

    n=sizeof(data1)/sizeof(data1[0]);
    printArray(data1,n);

    sorting(data1,n);
    printArray(data1,n);

    n=sizeof(data2)/sizeof(data2[0]);
    printArray(data2,n);

    sorting(data2,n);
    printArray(data2,n);

    return 0;
}
