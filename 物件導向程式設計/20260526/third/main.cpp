#include <iostream>
#include <fstream>

using namespace std;

class person{
    friend ostream & operator << (ostream &out,const person a);
    friend ofstream & operator << (ofstream &out,const person a);
    friend istream & operator >> (istream &in,person &a);
    string name;
    int age;
    string id;
public:
    person(string n="none", string i="none", int a=0){
        name=n;
        id=i;
        age=a;
    }
    bool operator ==(person a){
        return (name==a.name && id==a.id && age==a.age);
    }
};

ostream & operator << (ostream &out, const person a){
    out << "name=" << a.name << endl;
    out << "id=" << a.id << endl;
    out << "age=" << a.age << endl;
}
istream & operator >> (istream &in, person &a){
    cout << "name:"; in >> a.name;
    cout << "id:"; in >> a.id;
    cout << "age:"; in >> a.age;
    return in;
}
ifstream & operator >> (ifstream &in, person a){

    return in;
}
ofstream & operator << (ofstream &out, const person a){
    out << "name=" << a.name << endl;
    out << "id=" << a.id << endl;
    out << "age=" << a.age << endl;
    return out;
}

int main()
{
    person x;
    person y;
    ifstream file("test.dat");

    data >> x;
    cin >> y;
    cout << x;
    cout << y;
    if (x==y)
        cout << x << "與" << y << "一樣" << endl;
    else
        cout << x << "與" << y << "不一樣" << endl;

    cin >> x;
    file << x;


    return 0;
}
