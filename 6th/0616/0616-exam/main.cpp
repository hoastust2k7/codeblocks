#include <iostream>

using namespace std;

class complex {
public:
    int r;
    int i;

    void show() {
        if (r*i!=0) {

            if (i>0) {
                cout<<r<<"+"<<i<<"j"<<endl;
            }
            else {
                cout<<r<<i<<"j"<<endl;
            }
        }
        else if (r==0) {
            cout<<i<<"j"<<endl;
        }
        else if (i==0) {
            cout<<r<<endl;
        }
    }
};


int main() {
    complex x;
    cin >> x.r;
    cin >> x.i;
    x.show();

    return 0;

}
