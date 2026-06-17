#include <iostream>

using namespace std;

class test{
    int value;
public:
    void set (int a){
        value=a;
    }
    test& operator =(int b){
        value=b;
        return *this;
    }
    test& operator <=(int b){
        value=b;
        return *this;
    }
};


int main()
{
    test data;
    data=10;
    return 0;
}
