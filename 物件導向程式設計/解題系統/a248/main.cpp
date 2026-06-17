#include <iostream>

using namespace std;

int main()
{
    int a,b,N; // a砆埃计 b埃计 N碭计翴

    while (cin>>a>>b>>N){
        int integer=a/b; // 坝
        int point=a%b; //緇计

        cout << integer;

        if (N>0){
            cout << ".";
        }

        for (int i=0; i<N; i++){
            point=point*10;
            int point_2=point/b;
            cout << point_2;
            point=point%b;
        }
        cout << endl;
    }
    return 0;
}
