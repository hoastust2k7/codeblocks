#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){

    int a=20;
    ofstream my("test.dat");
    my<<a;
    my.close();


    return 0;
}
