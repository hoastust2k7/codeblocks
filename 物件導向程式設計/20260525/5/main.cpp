#include <iostream>

using namespace std;

class test{
   int value1,value2;
public:

    test (){
        value1=10;
        value2=20;
    }
    test (int a){
        value1=a;
        value2=0;
    }
    test (int a,int b){
        value1=a;
        value2=b;
    }
};

int main()
{
    test data(600,700);
    return 0;
}
