#include <iostream>

using namespace std;

class person{
    //屬性
    string name;
    string id;
    float score;
public:  // 因為變數寫在public前面，因此外部不能直接存取
    // 建構子constructor : 必須跟class名稱相同、無回傳性質(不能寫void person))、建立物件會自動執行
    person(){   //沒有參數的建構子
        name="無名氏";
        id="沒有學號";
        score=0;
    }
    person(string a){    //有參數的建構子
        name=a;
        id="沒有學號";
        score=0;
    }
    void show(){
        cout << "name=" << name << " id=" << id << " score=" << score << endl;
    }
};
int main()
{
   person peter("peter");  //建立一個person類型的物件，名字叫peter
                                        //("peter")會呼叫person(string a)

   peter.show();
    return 0;
}
