#include <iostream>
#include "bmi.h"
#include "person.h"
#include <string>


using namespace std;
int main()
{
     bmi x("張三",175,62,18);
     bmi y("李四",180,95);
     cin >> x;
     cin >> y;
     cout << x;
     cout << y;
     return 0;
}
