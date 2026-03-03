#include <iostream>
#include <cmath>

using namespace std;

void first() {
    string input;
    cin >> input;
    cout << "hello, " << input << endl;
}

void second() {
    int a, b;
    cin >> a;
    cin >> b;
    cout << a + b << endl;
}

void third() {
    int month, day, total;
    cin >> month;
    cin >> day;
    total = (month * 2 + day) % 3;
    if(total == 0) {
        cout << "´¶³q";
    }
    if(total == 1) {
        cout << "¦N";
    }
    if(total == 2) {
        cout << "¤j¦N ";
    }
}


int main() {
    third();
    return 0;
}
