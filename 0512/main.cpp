#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

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

void dataing() {
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

void sortingMidExam(std::string isID[], std::string isName[], std::string isFirstScore[], std::string isSecondScore[], std::string isTotalScore[], int arrWasCount) {
    for (int j = 0; j < arrWasCount - 1; j++) {
	for (int i = 0; i < arrWasCount - j - 1; i++) {
	    if (stof(isTotalScore[i]) < stof(isTotalScore[i + 1])) {
	    	std::string temp;
		temp = isID[i]; isID[i] = isID[i + 1]; isID[i + 1] = temp;
		temp = isName[i]; isName[i] = isName[i + 1]; isName[i + 1] = temp;
		temp = isFirstScore[i]; isFirstScore[i] = isFirstScore[i + 1]; isFirstScore[i + 1] = temp;
		temp = isSecondScore[i]; isSecondScore[i] = isSecondScore[i + 1]; isSecondScore[i + 1] = temp;
		temp = isTotalScore[i]; isTotalScore[i] = isTotalScore[i + 1]; isTotalScore[i + 1] = temp;
	    }
	}
    }
}

void printMidExam(std::string isID[], std::string isName[], std::string isFirstScore[], std::string isSecondScore[], std::string isTotalScore[], int arrWasCount) {
    for (int i = 0; i < arrWasCount; i++) {
	std::cout << i + 1 << ". " << isID[i] << " " << isName[i] << " " << isFirstScore[i] << " " << isSecondScore[i] << " " << isTotalScore[i] << std::endl;
    }
    std::cout << std::endl;
}

void calcMidExam(std::string isID[], std::string isName[], std::string isFirstScore[], std::string isSecondScore[], std::string isTotalScore[], int arrWasCount) {
    float isTotalScoreAver = 0.0f;
    int isTotalScoreLowest = std::stof(isTotalScore[arrWasCount - 1]);
    int isTotalScoreHighest = std::stof(isTotalScore[(arrWasCount / arrWasCount) - 1]);
    std::cout << "最小值：" << isTotalScoreLowest << std::endl;
    std::cout << "最大值：" << isTotalScoreHighest << std::endl;

    for (int i = 0; i < arrWasCount; i++) {
	isTotalScoreAver += std::stof(isTotalScore[i]);
    }
    isTotalScoreAver = isTotalScoreAver / arrWasCount;
    std::cout << std::fixed << std::setprecision(1) << "平均值：" << isTotalScoreAver << std::endl;
}

void readingMidExam() {
    int arrWasCount = 0;
    int inputSelect = 2;
    // std::ifstream midExam("./csieMidExam.csv");
    std::ifstream midExam("./MidExam.csv");
    std::string data;
    std::string *isID, *isName, *isFirstScore, *isSecondScore, *isTotalScore;
    if(midExam.is_open()) {
        getline(midExam, data);
        while(getline(midExam, data)) {
            arrWasCount++;
        }

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

	    sortingMidExam(isID, isName, isFirstScore, isSecondScore, isTotalScore, arrWasCount);
	    printMidExam(isID, isName, isFirstScore, isSecondScore, isTotalScore, arrWasCount);
	    calcMidExam(isID, isName, isFirstScore, isSecondScore, isTotalScore, arrWasCount);

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
    // system("PAUSE");
    // dataing();
    readingMidExam();
    return 0;
}
