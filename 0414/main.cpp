#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

void t_a011_1() {
    string text;
    int a, b, total;
    while(cin >> a >> text >> b) {
        if(text == "+") {
            total = a + b;
            cout << total << endl;
        } else if(text == "-") {
            total = a - b;
            cout << total << endl;
        } else if(text == "*") {
            total = a * b;
            cout << total << endl;
        } else if(text == "/") {
            total = a / b;
            cout << total << endl;
        }
    }
}

void t_a011_2() {
    string inputText, firstNumChar, text, secondNumChar;
    int a, b, total;
    while(getline(cin, inputText)) {
        stringstream token(inputText);
        getline(token, firstNumChar, ' ');
        getline(token, text, ' ');
        getline(token, secondNumChar);
        a = stoi(firstNumChar);
        b = stoi(secondNumChar);
        if(text == "+") {
            total = a + b;
            cout << total << endl;
        } else if(text == "-") {
            total = a - b;
            cout << total << endl;
        } else if(text == "*") {
            total = a * b;
            cout << total << endl;
        } else if(text == "/") {
            total = a / b;
            cout << total << endl;
        }

    }
}

void t_a042() {
    int classNum, priceTotal;
    cin >> classNum;
    priceTotal = ((classNum % 12) * 5) + ((classNum / 12) * 50);
    cout << priceTotal;
}

void a244() {
    int repeatTime, numChecker;
    long long int firstNum, secondNum, total;
    cin >> repeatTime;
    for(int i = 0; i < repeatTime; i++) {
        cin >> numChecker >> firstNum >> secondNum;
        if(numChecker == 1) {
            total = firstNum + secondNum;
            cout << total << endl;
        } else if(numChecker == 2) {
            total = firstNum - secondNum;
            cout << total << endl;
        } else if(numChecker == 3) {
            total = firstNum * secondNum;
            cout << total << endl;
        } else if(numChecker == 4) {
            total = firstNum / secondNum;
            cout << total << endl;
        }
    }
}

void a248() {
    double decimalNum, firstNum, secondNum , total;
    total = 18467 / 41;
    cout << fixed << setprecision(10) << total;
}

void a149() {
    int repeatTime;
    cin >> repeatTime;
    string inputText;
    for(int i = 0; i < repeatTime; i++) {
        cin >> inputText;
        int total = 1;
        for(int j = 0; j < inputText.length(); j++) {
            if(inputText[j] != 0) {
                total *= inputText.at(j) - '0';
            }
        }
        cout << total << endl;
    }
}
int main() {
    // t_a011_1();
    // t_a011_2();
    // t_a042();
    // a244();
    // a248();
    a149();
    return 0;
}
