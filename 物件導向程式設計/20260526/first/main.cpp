#include <iostream>

using namespace std;

class father{  //父類別
public:
    int a;

};
class son1: public father{  //子類別
    // a 是 public
public:
    void show(){
        a=10;
        cout << a << endl;
    }
};
class son2: protected father{   //子類別
    // a 是 protected
public:
    void show(){
        a=10;
        cout << a << endl;
    }
};
class son3: private father{   //子類別
    // a 是 private
public:
    void show(){
        a=10;
        cout << a << endl;
    }
};

int main()
{
    father w;
    son1 x;
    son2 y;
    son3 z;

    w.a=10;
    x.a=10;

    z.show();




    return 0;
}
