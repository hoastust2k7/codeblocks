#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

// using namespace std;

void first() {
    int tmp;
    int arrayNum[] = {2264, 112, 443, 333, 1100, 857};
    int arrayNumLenght = sizeof(arrayNum) / sizeof(arrayNum[0]);

    for (int i = 0; i < arrayNumLenght; i++) {
        std::cout << arrayNum[i] << " ";
    }
    std::cout << std::endl;
    for (int j = 0; j < arrayNumLenght - 1; j++) {
        for (int i = 0; i < arrayNumLenght - j - 1; i++) {
            if (arrayNum[i] > arrayNum[i + 1]) {
                tmp = arrayNum[i];
                arrayNum[i] = arrayNum[i + 1];
                arrayNum[i + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < arrayNumLenght; i++) {
        std::cout << arrayNum[i] << std::endl;
    }
}

void third() {
    int N = 47, i;
    std::string isID[N], isName[N], isFirstScore[N], isSecondScore[N], isTotalScore[N];
    std::ifstream midExam("./midExam.csv");
    std::string data;
    if(midExam.is_open()) {
        i = 0;
        getline(midExam, data);
        while(midExam.eof() == 0) {
            getline(midExam, data);
            std::stringstream token(data);
            getline(token, isID[i], ',');
            getline(token, isName[i], ',');
            getline(token, isFirstScore[i], ',');
            getline(token, isSecondScore[i], ',');
            getline(token, isTotalScore[i]);
            i++;
            // std::cout << "================================" << std::endl;
            // std::cout << "學號：" << isID[i] << std::endl;
            // std::cout << "姓名：" << isName[i] << std::endl;
            // std::cout << "選擇成績：" << isFirstScore << std::endl;
            // std::cout << "實作成績：" << isSecondScore << std::endl;
            // std::cout << "總成績：" << isTotalScore << std::endl;
            // std::cout << "================================" << std::endl;
        }

        for (int k = 0; k < i - 1; k++){
            for (int j = 0; j < i - k - 1; j++) {
                if (stof(isTotalScore[j]) > stof(isTotalScore[j + 1])) {
                    std::string tmp;
                    tmp = isID[j]; isID[j] = isID[j + 1]; isID[j + 1] = tmp;
                    tmp = isName[j]; isName[j] = isName[j + 1]; isName[j + 1] = tmp;
                    tmp = isFirstScore[j]; isFirstScore[j] = isFirstScore[j + 1]; isFirstScore[j + 1] = tmp;
                    tmp = isSecondScore[j]; isSecondScore[j] = isSecondScore[j + 1]; isSecondScore[j + 1] = tmp;
                    tmp = isTotalScore[j]; isTotalScore[j] = isTotalScore[j + 1]; isTotalScore[j + 1] = tmp;
                }
            }
        }

        for (int j = 0; j < i; j++) {
            std::cout << "================================" << std::endl;
            std::cout << "順序：" << j + 1 << std::endl;
            std::cout << "學號：" << isID[j] << std::endl;
            std::cout << "姓名：" << isName[j] << std::endl;
            std::cout << "選擇成績：" << isFirstScore[j] << std::endl;
            std::cout << "實作成績：" << isSecondScore[j] << std::endl;
            std::cout << "總成績：" << isTotalScore[j] << std::endl;
            std::cout << "================================" << std::endl;

        }
        midExam.close();
    } else {
        std::cerr << "File 404\n";
    }
}

int main() {
    system("PAUSE");
    // first();
    third();
    // cout << "Hello world!" << endl;
    return 0;
}
