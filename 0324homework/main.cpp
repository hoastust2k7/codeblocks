#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<char, int> cityNum = {
        {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14},
        {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18},
        {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35},
        {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
        {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31},
        {'Z', 33}
    };

    string idChar;
    int idTotal = 0;
    
    cin >> idChar;
    idChar = (to_string(cityNum[idChar.at(0)]) + idChar.substr(1));
    idTotal = idChar.at(0) - '0' + (idChar.at(1) - '0') * 9;
    for(int i = 1; i <= 8; i++) {
        idTotal += (idChar.at(i + 1) - '0') * (9 - i);
    }
    idTotal += (idChar.at(10) - '0');
    
    if(idTotal % 10 == 0) {
        cout << "real" << endl;
    } else {
        cout << "fake" << endl;
    }
    return 0;
}
