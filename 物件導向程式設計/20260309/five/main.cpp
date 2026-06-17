#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   int data;
   int up=0;
   int down=0;
   int a;
   cout << "請問你要模擬幾次:";
   cin >> a;

   srand(time(NULL));
   for (int i=0; i<a; i++){
        data=rand();
        if (data%2==0) {
            cout << "正面" << endl;
            up++;
        }

        else {
            cout << "反面" << endl;
            down++;
        }
    }
   cout << "正面:" << up << "次" << endl;
   cout << "反面:" << down << "次" << endl;
    return 0;
}

