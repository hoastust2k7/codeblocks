#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <cmath>

// using namespace std;

void first() {
    std::string id, name, score, data, person;
    int finder = 0;
    while(true) {
        std::ifstream file("./score.csv");
        std::cout << "�п�J�W�l�]�h�X�п�J'exit'��'�h�X'�^�G";
        std::cin >> person;
        if(person == "exit" || person == "�h�X") {
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
                    std::cout << name << "�o����" << score << "��" << std::endl;
                    if(stof(score) >= 60) {
                        std::cout << "�ұo�����I\n" << std::endl;
                    } else {
                        std::cout << "�n�~��[�o\n" << std::endl;
                    }
                }
            }
            if(finder == 0) {
                std::cout << "�d�L���H" << std::endl;
            }
            file.close();
            break;
        } else {
            std::cerr << "404" << std::endl;
        }
    }
}

std::map<char, int> cityNum = {
    {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14},
    {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18},
    {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35},
    {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
    {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31},
    {'Z', 33}
};

void test() {
    std::string text = "13123379548";
    // std::cout << text.at(0) << std::endl;
    for(int i = 1; i <= 8; i++) {
        std::cout << i << std::endl;
    }
}

void homework() {
    std::string idChar;
    int idTotal = 0;
    std::cout << "請輸入身分證字號：";
    std::cin >> idChar;
    idChar = (std::to_string(cityNum[idChar.at(0)]) + idChar.substr(1));
    idTotal = idChar.at(0) - '0' + (idChar.at(1) - '0') * 9;
    std::cout << idTotal << std::endl;
    for(int i = 1; i <= 8; i++) {
        idTotal += (idChar.at(i + 1) - '0') * (9 - i);
    }
    idTotal += (idChar.at(10) - '0');
    std::cout << idTotal << std::endl;

    if(idTotal % 10 == 0) {
        std::cout << "real" << std::endl;
    } else {
        std::cout << "fake" << std::endl;
    }
}

int main() {
    // cout << "Hello world!" << endl;
    // first();
    // second();
    homework();
    // test();
    return 0;
}
