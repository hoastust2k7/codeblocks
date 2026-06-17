#include <iostream>

using namespace std;

// public 公開 (外部可以直接存取)
// private 私有 (外部不能直接存取)
// protected 保護 (子孫可以直接存取)
// 沒寫內定是private

class test{
   int value;
public:
   set (int a){
        value=a;
    }
    test (int a){
        value=a;
    }
};


int main()
{
    test.data=0;
    return 0;
}
