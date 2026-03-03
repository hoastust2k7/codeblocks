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
        cout << "普通";
    } else if(total == 1) {
        cout << "吉";
    } else if(total == 2) {
        cout << "大吉 ";
    }
}

void fourth() {
    int year;
    while(cin >> year) {
        if((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) {
            cout << "閏年\n\n";
        }
        else {
            cout << "平年\n\n";
        }
    }
}


int main() {
    third();
    return 0;
}
