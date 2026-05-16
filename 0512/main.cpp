#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

// void priArr(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;
// }

// void sorting(int arrNum[], int arrNumLen) {
//     for (int j = 0; j < arrNumLen - 1; j++) {
//         for (int i = 0; i < arrNumLen - j - 1; i++) {
//             if (arrNum[i] > arrNum[i + 1]) {
//                 int tmp = arrNum[i];
//                 arrNum[i] = arrNum[i + 1];
//                 arrNum[i + 1] = tmp;
//             }
//         }
//     }

//     std::cout << "陣列排序後：" << std::endl;
//     for (int i = 0; i < arrNumLen; i++) {
//         std::cout << arrNum[i] << " ";
//     }
//     std::cout << std::endl;
// }

// void calcing(int arrNum[], int arrNumLen) {
//     int totalArr;
//     int smallArrNum = arrNum[(arrNumLen / arrNumLen) - 1];
//     int largeArrNum = arrNum[arrNumLen - 1];
//     float averArrNum;
//     std::cout << "最小值：" << smallArrNum << std::endl;
//     std::cout << "最大值：" << largeArrNum << std::endl;

//     for (int i = 0; i < arrNumLen; i++) {
//         averArrNum += arrNum[i];
//     }
//     averArrNum = averArrNum / arrNumLen;
//     std::cout << std::fixed << std::setprecision(1) << "平均值：" << averArrNum;
// }

// void dataing() {
//     int dataLen;
//     int *data;
//     std::cin >> dataLen;
//     data = new int[dataLen];

//     for (int i = 0; i < dataLen; i++) {
//         std::cout << "第" << i + 1 << "整數：";
//         std::cin >> data[i];
//     }
//     priArr(data, dataLen);
//     sorting(data, dataLen);
//     calcing(data, dataLen);
//     delete [] data;
// }

void sortingMidExam(std::string id[], std::string name[], std::string firstScore[], std::string secondScore[], std::string totalScore[], int arrWasCount) {
    for (int j = 0; j < arrWasCount - 1; j++) {
        for (int i = 0; i < arrWasCount - j - 1; i++) {
            if (stof(totalScore[i]) < stof(totalScore[i + 1])) {
                std::string temp;
                temp = id[i]; id[i] = id[i + 1]; id[i + 1] = temp;
                temp = name[i]; name[i] = name[i + 1]; name[i + 1] = temp;
                temp = firstScore[i]; firstScore[i] = firstScore[i + 1]; firstScore[i + 1] = temp;
                temp = secondScore[i]; secondScore[i] = secondScore[i + 1]; secondScore[i + 1] = temp;
                temp = totalScore[i]; totalScore[i] = totalScore[i + 1]; totalScore[i + 1] = temp;
            }
        }
    }
}

void printMidExam(std::string id[], std::string name[], std::string firstScore[], std::string secondScore[], std::string totalScore[], int arrWasCount) {
    for (int i = 0; i < arrWasCount; i++) {
        if (i < 9) {
            std::cout << "0";
        }
        std::cout << i + 1 << ". " << id[i] << ", " << name[i] << ", " << firstScore[i] << ", " << secondScore[i] << ", " << totalScore[i] << std::endl;
    }
    std::cout << std::endl;
}

void calcMidExam(std::string totalScore[], int arrWasCount) {
    float totalScoreAver = 0.0;
    int totalScoreLowest = std::stof(totalScore[arrWasCount - 1]);
    int totalScoreHighest = std::stof(totalScore[(arrWasCount / arrWasCount) - 1]);
    std::cout << "最小值：" << totalScoreLowest << std::endl;
    std::cout << "最大值：" << totalScoreHighest << std::endl;

    for (int i = 0; i < arrWasCount; i++) {
        totalScoreAver += std::stof(totalScore[i]);
    }
    std::cout << std::fixed << std::setprecision(1) << "平均值：" << totalScoreAver / arrWasCount << std::endl;
}

void readingMidExam() {
    int arrWasCount = 0;
    int inputSelect = 2;
    // std::ifstream midExam("./csieMidExam.csv");
    std::ifstream midExam("./MidExam.csv");
    std::string data;
    std::string * id, *name, *firstScore, *secondScore, *totalScore;
    if (midExam.is_open()) {
        getline(midExam, data);
        while (getline(midExam, data)) {
            arrWasCount++;
        }

        midExam.clear();
        midExam.seekg(0, std::ios::beg);

        id = new std::string[arrWasCount];
        name = new std::string[arrWasCount];
        firstScore = new std::string[arrWasCount];
        secondScore = new std::string[arrWasCount];
        totalScore = new std::string[arrWasCount];

        int i = 0;
        getline(midExam, data);
        while (getline(midExam, data)) {
            std::stringstream token(data);
            getline(token, id[i], ',');
            getline(token, name[i], ',');
            getline(token, firstScore[i], ',');
            getline(token, secondScore[i], ',');
            getline(token, totalScore[i]);
            i++;
        }

        sortingMidExam(id, name, firstScore, secondScore, totalScore, arrWasCount);
        printMidExam(id, name, firstScore, secondScore, totalScore, arrWasCount);
        calcMidExam(totalScore, arrWasCount);

        delete[] id;
        delete[] name;
        delete[] firstScore;
        delete[] secondScore;
        delete[] totalScore;
        midExam.close();
    }
    else {
        std::cerr << "File 404\n";
    }
}

void pause() {
   std::cout << "Press any key to continue..." << std::endl;
   std::getchar();
}


int main(int argc, char *argv[]) {
    // pause();
    // system("PAUSE");
    // dataing();
    readingMidExam();
    return 0;
}
