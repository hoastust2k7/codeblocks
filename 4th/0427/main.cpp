#include <iostream>
#include <fstream>
#include <sstream>

// using namespace std;

void first() {
    std::fstream file("text.dat");
    if(file.is_open()) {
        std::cout << "open";
    } else {
        std::cout << "no";
    }
}

void second() {
    std::ofstream file("text.txt");
    int a = 20;
    std::cout << a;
    file << a;
    file.close();
}

void third() {
    int inputScore;
    bool dataFound = false;
    std::cout << "輸入成績：";
    std::cin >> inputScore;
    std::ifstream midExam("./midExam.csv");
    std::string data;
    if(midExam.is_open()) {
        getline(midExam, data);
        while(midExam.eof() == 0) {
            getline(midExam, data);
            std::stringstream token(data);
            std::string isID, isName, isFirstScore, isSecondScore, isTotalScore;
            getline(token, isID, ',');
            getline(token, isName, ',');
            getline(token, isFirstScore, ',');
            getline(token, isSecondScore, ',');
            getline(token, isTotalScore);
            if(stof(isTotalScore) <= inputScore) {
                dataFound = true;
                std::cout << "================================" << std::endl;
                std::cout << "學號：" << isID << std::endl;
                std::cout << "姓名：" << isName << std::endl;
                std::cout << "選擇成績：" << isFirstScore << std::endl;
                std::cout << "實作成績：" << isSecondScore << std::endl;
                std::cout << "總成績：" << isTotalScore << std::endl;
                std::cout << "================================" << std::endl;
            }
        }
        if(!dataFound) {
            std::cerr << "查無此人(404)\n";
        }
        midExam.close();
    } else {
        std::cerr << "File 404\n";
    }
}

int main(int argc, char *argv[]) {
    // first();
    // second();
    third();
    // std::cout << argc << std::endl;
    // for(int i = 0; i < argc; i++) {
    //     std::cout << argv[i] << std::endl;
    // }
    // float firstNum, secondNum, resultNum;
//     std::string text;
//     firstNum = std::stof(argv[1]);
//     text = argv[2];
//     secondNum = std::stof(argv[3]);
//     if(text == "+") {
//         resultNum = firstNum + secondNum;
//         std::cout << resultNum << std::endl;
//     } else if(text == "-") {
//         resultNum = firstNum - secondNum;
//         std::cout << resultNum << std::endl;
//     } else if(text == argv[2]) {
//         resultNum = firstNum * secondNum;
//         std::cout << resultNum << std::endl;
//     } else if(text == "/") {
//         resultNum = firstNum / secondNum;
//         std::cout << resultNum << std::endl;
//     }


    // std::cout << argc << std::endl;
    // for(int i = 0; i < argc; i++) {
    //     std::cout << argv[i] << std::endl;
    // }
    // cout << "Hello world!" << endl;
    return 0;
}
