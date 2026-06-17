#include <iostream>

using namespace std;

void print(int data[],int n)
{
    for (int i=0; i<n; i++)
        cout<<data[i]<<" ";
    cout<<endl;
}

int main()
{
    int data[]= {12,5,-23,3,4};
    int n=5;

    print(data,n);
    for (int i=0; i<n-1; i++)
    {
        if (data[i]>data[i+1])
        {
            int t=data[i];
            data[i]=data[i+1];
            data[i+1]=t;
        }
        print(data,n);
    }
    print(data,n);
    return 0;
}
