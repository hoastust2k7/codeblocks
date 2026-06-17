#include <iostream>

using namespace std;

class ComplexNumber{  //ミ 狡计 摸
    float r,i;    // r琌龟场 i琌店场
                    // 5+5i    r=5   i=5

public:   //狥﹁砆场ㄏノ
    ComplexNumber(float a, float b){
        r=a;
        i=b;
    }
    ComplexNumber(float a){
        r=a;
        i=0;
    }
    ComplexNumber(){
        r=0;
        i=0;
    }
    void show(){
        cout << r << "+" << i << "i" << endl;
    }
};
int main()
{
    ComplexNumber a(5,5),b(9,-8),c(9),d;

    a.show();
    b.show();
    c.show();
    d.show();


    return 0;
}
