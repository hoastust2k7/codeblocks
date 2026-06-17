#include "fun.hpp"
#include <iostream>


using namespace std;
int x=1000;//x琌global variable 办跑计

//ㄧ计 --- 捌祘Α
// a()碞琌ㄧ计ㄧ计琌a



// main()碞琌ㄧ计ㄧ计琌main
int main()
{
    int x=10;//x琌local variable Ы场跑计(跋办跑计)
    cout << "main, x=" << x << endl;
    cout << "main, outside x="<<::x << endl;
    a();
    b();
    a();
    return 0;
}
