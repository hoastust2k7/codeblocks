#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float a,b,result;
    string op;
    //main.exe 45       +       61
    //argv[0] argv[1] argv[2] argv[3]
    if (argc==4){
        a=stof(argv[1]);
        b=stof(argv[3]);
        op=argv[2];
        if (op=="+")
        {
            cout <<a<<"+"<<b<<"="<< a+b << endl;
        }
        else if (op=="x"){
            cout <<a<<"x"<<b<<"="<< a*b << endl;
        }else if (op=="-"){
            cout <<a<<"-"<<b<<"="<< a-b << endl;
        }else if (op=="/"){
            cout <<a<<"/"<<b<<"="<< a/b << endl;
        }
    }

    return 0;
}
