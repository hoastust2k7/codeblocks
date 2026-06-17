#include <iostream>
#include <map>
#include <string>

// using namespace std;

void t_a001() {
    std::string word;
    std::cin >> word;
    std::cout << "hello, " << word << std::endl;
}

void t_a002_1() {
    // std::map <char, int> cityNum = {
    //     {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14},
    //     {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18},
    //     {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35},
    //     {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
    //     {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31},
    //     {'Z', 33}
    // };
    int cityCode[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20,
    21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    std::string uIDChar;
    int uID, uIDTotal = 0, uIDTotalChecker;
    std::cin >> uIDChar;
    // for(int i = 0; i < uIDChar.length(); i++) {
    //     std::cout << uIDChar[i] << std::endl;
    // }
    // uIDChar = (std::to_string(cityNum[uIDChar.at(0)]) + uIDChar.substr(1));
    uID = cityCode[uIDChar[0] - 'A'];
    uIDTotal = (uID / 10) * 1 + (uID % 10) * 9;
    for(int i = 0; i < 8; i++) {
        uIDTotal = uIDTotal + (uIDChar[i + 1] - '0' ) * (8 - i);
    }
    uIDTotalChecker = 10 - (uIDTotal % 10);
    std::cout << uIDTotal << uIDTotalChecker;
}

void t_a002_2() {
    int cityCode[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20,
    21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    std::string uIDChar;
    int uID, uIDTotal = 0, uIDTotalChecker;
    std::cin >> uIDChar;

    for(char j = 'A'; j <= 'Z'; j++) {
        // std::cout << j << uIDChar;
        uID = cityCode[j - 'A'];
        uIDTotal = (uID / 10) * 1 + (uID % 10) * 9;
        for(int i = 0; i < 8; i++) {
            uIDTotal = uIDTotal + (uIDChar[i + 1] - '0' ) * (8 - i);
        }
        uIDTotalChecker = 10 - (uIDTotal % 10);
        // std::cout << ", Total = " << uIDTotal << ", Checker = " << uIDTotalChecker << std::endl;
        if(uIDTotalChecker == uIDTotal % 10) {
            std::cout << j;
        }
    }
}

int main() {
    // t_a001();
    t_a002_2();
    return 0;
}
