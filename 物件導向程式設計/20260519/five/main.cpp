#include <iostream>

using namespace std;

class ComplexNumber{  //ミ 狡计 摸
    float r,i;    // r琌龟场 i琌店场
                    // 5+5i    r=5   i=5

public:   //狥﹁砆场ㄏノ
    ComplexNumber(float a=0.0, float b=0.0){  //安砞箇砞
        r=a;
        i=b;
    }
    void show(){
        if (r==0){  //狦龟场单箂
            if (i==0)   //狦店场单箂
                cout << r << endl;  //碞箂
            else
                if (i>0)  //狦店场箂
                    cout << i << "i" << endl;
                else   //狦店场箂
                    cout << i << "i" << endl;
            }
            else{
                if (i==0)  //狦店场单箂
                    cout << r << endl;  //店场
                else{
                    if (i>0)  //狦店场箂
                        cout << r << "+" << i << "i" << endl;   //龟场店场
                    else    //狦店场箂
                        cout << r << i << "i" << endl;
                }
        }
    }
};
int main()
{
    ComplexNumber a(5,5),b(9,-8),c(9),d,e(0,-4);

    a.show();
    b.show();
    c.show();
    d.show();
    e.show();


    return 0;
}
