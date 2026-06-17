#include <iostream>
#include <fstream>

using namespace std;

class person{
    friend ostream & operator << (ostream &out,const person a);
    friend ofstream & operator << (ofstream &out,const person a);
    friend istream & operator >> (istream &in,person &a);
    friend ifstream & operator >> (ifstream &in,person &a);
    string name;
    int age;
    string id;
public:
    person(string n="none", string i="none", int a=0){
        name=n;
        id=i;
        age=a;
    }
    bool operator ==(person x){
        return (name==x.name && id==x.id && age==x.age);
    }
};

ostream & operator << (ostream &out, const person a){
    out << "name=" << a.name << endl;
    out << "id=" << a.id << endl;
    out << "age=" << a.age << endl;

    return out;
}
istream & operator >> (istream &in, person &a){
    cout << "name:";
    in >> a.name;

    cout << "id:";
    in >> a.id;

    cout << "age:";
    in >> a.age;

    return in;
}
ifstream & operator >> (ifstream &in,person &a){
    string temp;
    getline(in,temp,':');
    in >> a.name;
    getline(in,temp,':');
    in >> a.id;
    getline(in,temp,':');
    in >> a.age;

    return in;
}
ofstream & operator << (ofstream &out, const person a){
    out << a.name << endl;
    out <<  a.id << endl;
    out << a.age << endl;

    return out;
}

int main()
{
    person x;
    person y;
    ifstream file("test.dat");

    file >> x;
    cin >> y;
    cout << "----------------------" << endl;
    cout << "檔案資料:" << endl;
    cout << x;
    cout << "輸入資料:" << endl;
    cout << y;
    cout << "----------------------" << endl;
    if (x==y)
        cout << x << "與" << endl << y << "一樣" << endl;
    else
        cout << x << "與" << endl << y << "不一樣" << endl;

    return 0;
}
