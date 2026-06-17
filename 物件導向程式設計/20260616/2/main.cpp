#include <iostream>

using namespace std;

class complex{
    friend istream & operator >> (istream &in, complex &a);
    int r;
    int i;
public:
    void show(){
        if (r*i!=0){
            if (i>0)
                cout << r << "+" << i << "j" << endl;
        else
            cout << r << i << "j" << endl;
        }
        else if (r==0)
            cout << i << "j" << endl;
        else if (i==0)
            cout << r << endl;
    }

};

istream & operator >> (istream &in, complex &a){
        in >> a.r;
        in >> a.i;


}

int main()
{
    complex x;
    cin >> x;
    x.show();
    return 0;
}
