#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("test.txt");
    int a,sum=0;

    if (file.is_open()){
            if (file >> a){
                cout << a;
                sum=a;

            while (file >> a){
                cout << "+" << a;
                sum += a;
        }
         cout << "=" << sum << endl;
    }
}
    else{
        cout << "無此檔案" << endl;
    }
    return 0;
}
