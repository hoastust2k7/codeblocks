#include <iostream>
#include "func-b.hpp"

using namespace std;

extern int x;

void b() {
    cout << "b, x = " << ::x << endl;
}
