#include <iostream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
    string data="±i¤T,97";
    string name;
    int score;
    stringstream token(data);
    getline (token,name,',');
    string temp;
    getline (token,temp,',');
    score=stoi(temp);

    return 0;
}
