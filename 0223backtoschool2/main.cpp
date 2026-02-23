#include <iostream>
#include <iomanip>

using namespace std;

void first() {
    int x = 2;
    int y = 4;
    cout << "x + y = " << x << " + " << y << " = " << x + y << endl;
}

void second() {
    int a = 4;
    int b = 2;
    cout << "a + b = " << a << " + " << b << " = " << a + b << endl;
}

void third() {
    float c = 12.3456789;
    double d = 12.3456789;

    cout << fixed << setprecision << endl;
    cout << c << endl;
    cout << d << endl;
}

void fourth() {
    int a;
    float b;
    a = 10/3.0;
    b = 10/3.0;
    cout << a << endl;
    cout << b << endl;
}

void fifth() {
    int n = 13,113,456,196;
    sqr(n)
    cout << n << endl;
}

int main() {
    first();
    cout << "\n";
    second();
    cout << "\n";
    third();
    cout << "\n";
    fourth();
    cout << "\n";
    fifth();

    return 0;
}
