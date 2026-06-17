#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   int data;

   srand(time(NULL));
   for (int i=0; i<10; i++){
        data=rand();
        if (data%2==0)
            cout << "正面" << endl;
        else
            cout << "反面" << endl;
   }
    return 0;
}
