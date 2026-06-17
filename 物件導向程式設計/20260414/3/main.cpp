#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string data;
    string a,b;
    string op;


    while (getline(cin,data)){
        stringstream token(data);
        getline(token,a,',');
        getline(token,op,',');
        getline(token,b,',');
        if (op=="+")
            cout << stoi(a)+stoi(b) << endl;
        else if (op=="-")
            cout << stoi(a)+stoi(b) << endl;
        else if (op=="*")
            cout << stoi(a)+stoi(b) << endl;
        else if (op=="/")
            cout << stoi(a)+stoi(b) << endl;

    }

    return 0;
}
