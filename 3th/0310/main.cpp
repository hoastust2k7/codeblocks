#include <iostream>
#include <cmath>


using namespace std;

// void a005() {
//     int input, a, b, c, d;

//     cin >> input;

//     for(int i = 0; i < input; i++) {
//         cin >> a >> b >> c >> d;
//         if(b - a == c - b && c - b == d - c) {
//             cout << a << " " << b << " " << c << " " << d << " " << d + (b - a) <<  endl;
//         }
//         else {
//             cout << a << " " << b << " " << c << " " << d << " " << d * (b / a) <<  endl;
//         }
//     }
// }

void a006() {
    int a1, b1, c1, total;
    float x1, x2;

    cin >> a1 >> b1 >> c1;

    total = (b1 * b1) - (4 * a1 * c1);
    x1 = (-b1 + sqrt((b1 * b1) - (4 * a1 * c1))) / (2 * a1);
    x2 = (-b1 - sqrt((b1 * b1) - (4 * a1 * c1))) / (2 * a1);

    if(total < 0) {
        cout << "No real root" << endl;
    } else if(total > 0) {
        cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
    } else {
        cout << "Two same roots x=" << x1 << endl;
    }
}

int main() {
    // a005();
    a006();
    return 0;
}
