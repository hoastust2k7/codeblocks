#include <iostream>
#include "fun.hpp"

using namespace std;
int x=1000; // x琌办跑计

//ㄧ计 --- 捌祘Α
// a()碞琌ㄧ计ㄧ计琌a
a(){
    int x=100; // x琌local variableЫ场跑计(跋办跑计)
    cout << "a, x=" << x << endl ;
    cout << "a, outside x=" << ::x << endl ;
    ::x++;
}

// main()碞琌ㄧ计ㄧ计琌main
int main()
{
    int x=10; // x琌local variableЫ场跑计(跋办跑计)
    cout << "main, x=" << x << endl;
    cout << "main, outside x=" << ::x << endl;
    a();
    b();
    a();
    return 0;
}
