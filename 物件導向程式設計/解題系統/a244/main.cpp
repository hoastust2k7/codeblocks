#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    stringstream output;

    for (int i=0;i<N;i++){
        int a;
        long long b,c;
        cin >> a >> b >> c;
        long long result=0;

        if (a==1){
            result=b+c;
        }
        else if (a==2){
            result=b-c;
        }
        else if (a==3){
            result=b*c;
        }
        else if (a==4){
            result=b/c;
        }
        else{
            result=0;
        }

        output << result << "\n";
    }
    cout << output.str();
    return 0;
}
