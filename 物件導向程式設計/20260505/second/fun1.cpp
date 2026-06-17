#include "fun1.hpp"
#include <iostream>

a()
{
    int x=100;//x琌local variable Ы场跑计(跋办跑计)

    cout << "a, x=" << x << endl ;
    cout << "a, outside x="<<::x << endl;
    ::x++;
}
