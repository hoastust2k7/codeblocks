#include <iostream>

using namespace std;

class person{
public:   //下面的資料可以在外部直接使用
    //屬性
    string name;
    string id;
    float score;
};

int main()
{
    person peter,a={"mary","5b3g0002",60};  //建立兩個person物件
                                                                      //建立一個叫a的person，並給定初始值
                                                                      // a.name="mary"   a.id="5b3g0001"   a.score="60

    // 設定peter資料
    peter.name="peter";
    peter.id="5b3g0001";
    peter.score=67.5;

    return 0;
}
