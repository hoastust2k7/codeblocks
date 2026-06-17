#include <iostream>

using namespace std;

class score{
    friend score operator +(int a,score b);
    // friend 允許這個函式存取score的private成員
    // 有一個 全域函式 叫做 operator+ ， 可以處理 int + score   ex. 10+peter

    int math;
    int computer;
    int total;

public:
    score(int a=0,int b=0){
        math=a;
        computer=b;
        total=math+computer;
    }

    score operator +(score b){  // 定義score+score  ex. peter+mary
        return score(math+b.math , computer+b.computer);
    }

    score operator +(int x){  //定義score+int  ex.peter+10
        return score(math+x , computer+x);  //把x加到兩科
    }

    void show(){
        cout << math << "," << computer << endl;
    }
};

score operator +(int a, score b){  //定義int+score   ex.10+peter
    return score(a+b.math , a+b.computer);
}

int main() {

    score peter(10,20);
    score mary(20,35);
    score tom;

    tom=peter+mary; //30,55
    tom.show();

    tom=peter+10;   //20,30
    tom.show();

    tom=10+peter;   //20,30
    tom.show();

    return 0;
}
