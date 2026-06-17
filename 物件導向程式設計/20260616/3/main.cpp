#include <iostream>

using namespace std;

class exam{
    friend ostream & operator << (ostream &out, exam &data);
    float value;
public:
    exam(float x=0.0)
    {
        value=x;
    }
    void set(float a)
    {
        value=a;

    }
    float get()
    {
        return value;
    }
    exam & operator + (exam &data){
        value=value+data.get();
        return *this;
    }
};

ostream & operator << (ostream &out, exam &data){
    out << data.get() << endl;
    return out;
}

int main()
{
    exam x,y;
    float a,b;
    cin >> a >> b;

    x.set(a);
    y.set(b);

    cout << x+y << endl;

    return 0;
}
