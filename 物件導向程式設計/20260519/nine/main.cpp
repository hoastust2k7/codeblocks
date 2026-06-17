#include <iostream>

using namespace std;

class ComplexNumber  //建立一個名叫 複數 的類別
{
    friend ostream & operator << (ostream &out,const ComplexNumber a);
    // friend=允許外部函式存取private
    // operator 重新定義 ( cout 、你要印出的複數)

    // 讓operator << 可以讀取r和i來印出複數
    friend istream & operator >> (istream & in, ComplexNumber &a);
    // 重新定義 cin
    // 讓使用者輸入複數的實部與虛部
    friend ComplexNumber operator +(const ComplexNumber a, const ComplexNumber b);
    float r,i;  //寫在private 應該是私人的 ，但因為有friend

public:
    ComplexNumber (float a=0.0, float b=0.0)
    {
        r=a;
        i=b;
        //r=5 , i=5   印出 5+5i
        //r=5 , i=-5   印出 5-5i  ，不可以為 5+-5i
        //r=5 , i=0   印出 5
        //r=0 , i=5   印出 5i
        //r=0 , i=0   印出 0
    }
    ComplexNumber operator -(const ComplexNumber a){
        return ComplexNumber (r-a.r,i-a.i);
    }
};
//operator +,-,*,/,<<,>>,........
istream & operator >> (istream &in, ComplexNumber &a){
    in >> a.r >> a.i;  // = cin >> a >> b
    return in;
}
// operator << 實作
ostream & operator << (ostream &out,const ComplexNumber a)
{
    // r=o
    if (a.r==0)  // 如果實部為0
    {
        if (a.i==0)
            out << a.r << endl;
        else
            if (a.i>0)  // 如果虛部也為0
                out << a.i << "i" << endl;  // 印出0
            else   // 如果虛部不為0  ex. i=5
                out << a.i << "i" << endl;  // 印出5i
    }
        else
        {
            if (a.i==0)   // 如果虛部為0
                out << a.r << endl;  //印出實部
            else {
                if (a.i>0)
                        out << a.r << "+" << a.i << "i" << endl;
                else
                        out << a.r << a.i << "i" << endl;
                    }
            }
    return out;
}
ComplexNumber operator+(const ComplexNumber a, const ComplexNumber b){
    ComplexNumber tmp;
    tmp.i=a.i+b.i;
    tmp.r=a.r+b.r;
    return tmp;
}

int main()
{
    ComplexNumber a(3,-4),b(5,1),c;
    c=a-b;
    cout << c << endl;
    return 0;
}
