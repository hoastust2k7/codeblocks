#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   int data;

   srand(time(NULL));
   for (int i=0; i<10; i++){
        data=rand();
        if (data%3==0)
            cout << "°Å¤M" << endl;
        else if (data%3==1)
            cout << "¥ÛÀY" << endl;
        else
            cout << "¥¬" << endl;
   }
    return 0;
}
