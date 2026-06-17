#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,sum=0,data;
    float ave;

    cin >> n;
    for (int i=0;i<n;i++){
            cin >> data;
            sum=sum+data;
    }
    ave=sum*1.0/n;
    cout << sum << endl;
    cout << fixed << setprecision(1) << ave << endl;
    return 0;
}
