#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void first() {
    int input;
    cout << "請輸入數字：";
    cin >> input;
    cout << "你輸入數字是 = " << input << endl;
}

void second() {
    float x;
    double y;

    cout << "請輸入x：";
    cin >> x;
    y = sqrt((x * x * x + 2 * x + 5)/(6 * x + 1));
    cout << fixed << setprecision(10);
    cout << "y = " << y << endl;
}

void third() {
    float x, y;

    cout << "x = ";
    cin >> x;
    y = pow(x, 3);
    cout << "y = " << y << endl;
}

void fourth() {
    float a, b, c;
    double x1, x2;

    cout << "\n解一元二次方程式\n";
    cout << "請輸入a：";
    cin >> a;
    cout << "請輸入b：";
    cin >> b;
    cout << "請輸入c：";
    cin >> c;

    cout << fixed << setprecision(10);
    cout << "\n2x^2 + 3x - 5 = 0 的兩個根是\n";

    cout << fixed << setprecision(1);
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}

void homework() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        fourth();
    }
}


int main() {
    //first();
    //cout << "\n";
    //second();
    //cout << "\n";
    //third();
    //cout << "\n\n";
    homework();

    return 0;
}
