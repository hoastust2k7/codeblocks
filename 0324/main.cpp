#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>

// using namespace std;

void first() {
    std::string id, name, score, data, person;
    int finder = 0;
    while(true) {
        std::ifstream file("./score.csv");
        std::cout << "請輸入名子（退出請輸入'exit'或'退出'）：";
        std::cin >> person;
        if(person == "exit" || person == "退出") {
            break;
        } else if(file.is_open()) {
            while(file.eof() == 0) {
                getline(file, data);
                std::stringstream token(data);
                getline(token, id, ',');
                getline(token, name, ',');
                getline(token, score, ',');
                if(name == person) {
                    finder = 1;
                    std::cout << name << "這次考" << score << "分" << std::endl;
                    if(stof(score) >= 60) {
                        std::cout << "考得不錯！\n" << std::endl;
                    } else {
                        std::cout << "要繼續加油\n" << std::endl;
                    }
                }
            }
            if(finder == 0) {
                std::cout << "查無此人" << std::endl;
            }
            file.close();
            break;
        } else {
            std::cerr << "404" << std::endl;
        }
    }
}

std::map<char, int> table = {
    {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14},
    {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18},
    {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35},
    {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
    {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31},
    {'Z', 33}
}
void homework() {
    std::string id;
    int aphabet = 0;
    std::cin >> id;
    std::cout << id.at(0);
    if(id.at(0) == '')

    cout << table['A']
}

int main() {
//    cout << "Hello world!" << endl;
//    first();
//    second();
    homework();
    return 0;
}
