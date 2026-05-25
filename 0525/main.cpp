#include <iostream>

// using namespace std;

class firstClass {
    int value;
public:
    void set (int a) {
        value = a;
    }
    firstClass& operator = (int b) {
        value = b;
        return *this;
    }
    void print() {
        std::cout << "firstClass, " << "value = " << value << std::endl;
    }
};

void first() {
    firstClass data;
    data = 10;
    data.print();
}

class secondClass {
   int value1,value2;
public:
//     secondClass () {
//         value1 = 10;
//         value2 = 20;
//     }
//     secondClass (int a) {
//         value1 = a;
//         value2 = 0;
//     }
//     secondClass (int a,int b) {
//         value1 = a;
//         value2 = b;
//     }
    secondClass (int a = 0 ,int b = 0) {
        value1 = a;
        value2 = b;
    }
    void print() {
        std::cout << "secondClass, " << "value1 = " << value1 << ", value2 = " << value2 << std::endl;
    }
};

void second() {
    secondClass data(600, 70);
    data.print();
}
class thirdClass {
    friend thirdClass operator + (int a, thirdClass b);
    int math;
    int computer;
    int total;
public:

    thirdClass operator+ (thirdClass b) {
        return thirdClass(math + b.math, computer + b.computer);
    }

    thirdClass operator+ (int x) {
        return thirdClass(math + x, computer + x);
    }
    thirdClass (int a = 0, int b = 0){
        math = a;
        computer = b;
        total = math + computer;
    }
    void print() {
        std::cout << "thirdClass, " << "math = " << math << ", computer = " << computer << ", total = " << total << std::endl;
    }
};

thirdClass operator+ (int a, thirdClass b){
    return thirdClass(a + b.math, a + b.computer);
}

void third() {
    thirdClass peter(10,20);
    thirdClass mary(20,35);
    thirdClass tom;

    tom = peter + mary;//30,55
    tom.print();
    tom = peter + 10; //20,30
    tom.print();
    tom = 10 + peter; //20,30
    tom.print();
};

int main() {
//     cout << "Hello world!" << endl;
//     first();
//     second();
    third();
    return 0;
}
