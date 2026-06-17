#include <iostream>
#include <iomanip>

using namespace std;

void print(int data[],int n){
    for (int i=0;i<n;i++)
        cout << data[i] << " ";
    cout << endl;
}
void sorting (int data[],int n)
{

    for (int i=0; i<n; i++)
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
    int n;
    int *data;

    cout << "input n:";
    cin >> n;

    data=new int[n]; //跟作業系統要n個整數空間
    //主要運算

    for (int i=0;i<n;i++)
        {
            cout << "請輸入第" << i+1 << "個整數:";
            cin >> data[i];
        }
        cout << "排序前資料:";
        print(data,n);

    //

    sorting(data,n);

    cout << "排序後資料:";
    print(data,n);

    int max=data[0];
    for (int a=1; a<n; a++){
        if (data[a]>max){
            max=data[a];
        }
    }
    cout << "最大值為:" << max << endl;

    int min=data[0];
    for (int a=1; a<n; a++){
        if (data[a]<min){
            min=data[a];
        }
    }
    cout << "最小值為:" << min << endl;

    double sum=0;
    for (int b=0; b<n; b++){
        sum += data[b];
    }
    float average=sum/n;
    cout << fixed << setprecision(1);
    cout << "平均值為:" << average << endl;


    delete [] data; // 把要來的空間歸還給作業系統
    return 0;
}
