#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,m,result=1;
    cin >> a >> b;
    if (a>b)
        m=a;
    else
        m=b;
    for (int i=2; i<sqrt(m); i++){
        if ((a%i==0) && (b%i==0)){
            a=a/i;
            b=b/i;
            result=result*i;
            i=i-1;
    }
    }
    cout << result << endl;
    return 0;
}
