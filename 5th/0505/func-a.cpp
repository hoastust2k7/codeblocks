#include <iostream>
#include "func-a.hpp"

using namespace std;

extern int x;

void a() {
    int x = 100;
    cout << "a, x = " << x << endl;
    cout << "a, x outside = " << ::x << endl;
    ::x++;
}
