#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

void priArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void sorting(int arrNum[], int arrNumLen) {
    for (int j = 0; j < arrNumLen - 1; j++) {
        for (int i = 0; i < arrNumLen - j - 1; i++) {
            if (arrNum[i] > arrNum[i + 1]) {
                int tmp = arrNum[i];
                arrNum[i] = arrNum[i + 1];
                arrNum[i + 1] = tmp;
            }
        }
    }

    std::cout << "陣列排序後：" << std::endl;
    for (int i = 0; i < arrNumLen; i++) {
        std::cout << arrNum[i] << " ";
    }
    std::cout << std::endl;
}

void calcing(int arrNum[], int arrNumLen) {
    int totalArr;
    int smallArrNum = arrNum[(arrNumLen / arrNumLen) - 1];
    int largeArrNum = arrNum[arrNumLen - 1];
    float averArrNum;
    std::cout << "最小值：" << smallArrNum << std::endl;
    std::cout << "最大值：" << largeArrNum << std::endl;

    for (int i = 0; i < arrNumLen; i++) {
        averArrNum += arrNum[i];
    }
    averArrNum = averArrNum / arrNumLen;
    std::cout << std::fixed << std::setprecision(1) << "平均值：" << averArrNum;
}

int dataing() {
    int dataLen;
    int *data;
    std::cin >> dataLen;
    data = new int[dataLen];

    for (int i = 0; i < dataLen; i++) {
        std::cout << "第" << i + 1 << "整數：";
        std::cin >> data[i];
    }
    priArr(data, dataLen);
    sorting(data, dataLen);
    calcing(data, dataLen);
    delete [] data;
}

void arrCount() {
    int arrWasCount = 0;
    int inputSelect = 2;
    std::ifstream midExam("./midExam.csv");
    std::string data;
    std::string *isID, *isName, *isFirstScore, *isSecondScore, *isTotalScore;
    if(midExam.is_open()) {
        getline(midExam, data);
        while(getline(midExam, data)) {
            arrWasCount++;
        }
        std::cout << arrWasCount << std::endl;
        midExam.clear();
        midExam.seekg(0, std::ios::beg);

        isID = new std::string[arrWasCount];
        isName = new std::string[arrWasCount];
        isFirstScore = new std::string[arrWasCount];
        isSecondScore = new std::string[arrWasCount];
        isTotalScore = new std::string[arrWasCount];

        int i = 0;
        getline(midExam, data);
        while(getline(midExam, data)) {
            std::stringstream token(data);
            getline(token, isID[i], ',');
            getline(token, isName[i], ',');
            getline(token, isFirstScore[i], ',');
            getline(token, isSecondScore[i], ',');
            getline(token, isTotalScore[i]);
            i++;
        }
        for (int j = 0; j < i; j++) {
            if (inputSelect == 1) {
                std::cout << j + 1 << " " << isName[j] << " " << isFirstScore[j] << std::endl;
            } else if (inputSelect == 2) {
                std::cout << j + 1 << " " << isName[j] << " " << isSecondScore[j] << std::endl;
            } else {
                std::cout << j + 1 << " " << isName[j] << " " << isTotalScore[j] << std::endl;
            }
        }

        delete [] isID;
        delete [] isName;
        delete [] isFirstScore;
        delete [] isSecondScore;
        delete [] isTotalScore;
        midExam.close();
    } else {
        std::cerr << "File 404\n";
    }
}

int main() {
    system("PAUSE");
    // dataing();
    arrCount();
    return 0;
}
