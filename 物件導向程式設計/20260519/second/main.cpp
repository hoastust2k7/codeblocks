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
    void show(){
        cout << r << "+" << i << "i" << endl;
    }
};
int main()
{
    ComplexNumber a(5,5),b(9,-8);

    a.show();
    b.show();


    return 0;
}
