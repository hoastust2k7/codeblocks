#include "fun.h"
#include <iostream>

// b()就是一個函數，函數的名字是b

extern int x=10;
using namespace std;

void b(){
    cout << "b, x=" << x << endl;
}
