#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){

   ofstream File("test.dat");

   if (File.is_open())
        cout << "¶}ÀÉok";
   else
        cout << "¶}ÀÉ¥¢±Ñ";

   return 0;
}
