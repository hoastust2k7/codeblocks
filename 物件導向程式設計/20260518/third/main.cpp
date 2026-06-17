#include <iostream>

using namespace std;

class person{
    //屬性
    string name;
    string id;
    float score;
public:  // 因為變數寫在public前面，因此外部不能直接存取
    // 建構子constructor : 必須跟class名稱相同、無回傳性質、建立物件會自動執行
    person(){
        name="無名氏";
        id="沒有學號";
        score=0;
    }
    void show(){
        cout << "name=" << name << " id=" << id << " score=" << score << endl;
    }
};
int main()
{
   person peter;  //會自動呼叫person(){}

   peter.show();  // 因此會自動印出
    return 0;
}
