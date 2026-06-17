#include <iostream>
#include "person.h"
#include "student.h"
#include "scoreTable.h"

using namespace std;

int main()
{
    system("pause");

    scoreTable a("data.csv");
    a.sorting(0);
    cout << a;




    return 0;
}
