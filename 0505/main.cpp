#include <iostream>
#include "func-a.hpp"
#include "func-b.hpp"

using namespace std;

int x = 1000;

int main() {
    // first();
    int x = 10;
    cout << "main, x = " << x << endl;
    cout << "main, outside x = " << ::x << endl;
    a();
    b();
    a();
    // cout << "Hello world!" << endl;
    return 0;
}
