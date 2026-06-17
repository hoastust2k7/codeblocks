#include <iostream>
#include "person.h"
#include "student.h"
#include "scoreTable.h"

using namespace std;

int main()
{
    system("pause");
    scoreTable a("data.csv");
    cout << a;




    return 0;
}
