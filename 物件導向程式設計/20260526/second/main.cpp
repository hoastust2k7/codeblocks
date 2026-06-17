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

    return out;
}
istream & operator >> (istream &in, person &a){
    cout << "name:"; in >> a.name;
    cout << "id:"; in >> a.id;
    cout << "age:"; in >> a.age;
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
    ofstream file("a.dat");
    cin >> x;
    file << x;
    file.close();


    return 0;
}
