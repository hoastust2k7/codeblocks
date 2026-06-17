#include <iostream>

using namespace std;


class score{
     friend int  operator +(int a,score& b);
     int math;
     int computer;
     int total;
public:
    score(int a=0,int b=0){
        math=a;
        computer=b;
        total=math+computer;
    }

 };

score & operator +(int a, score& b){
    return score(a+b.math,a+b.computer);
}


int main(int argc, char** argv) {
    score peter(10,20);
    score mary(20,35);
    score tom;

    tom=peter+mary; //30,55
    tom=peter+10;  //20,30
    tom=10+peter;  //20,30

    return 0;
}

