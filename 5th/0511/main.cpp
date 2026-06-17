#include <iostream>
#include <fstream>
#include <string>

// using namespace std;

void sorting(int arrNum[], int arrNumLen) {
    // int tmp;
    // int arrayNum[] = {2264, 112, 443, 333, 1100, 857};
    // int arrayNumLenght = sizeof(arrayNum) / sizeof(arrayNum[0]);

    for (int i = 0; i < arrNumLen; i++) {
        std::cout << arrNum[i] << " ";
    }
    std::cout << std::endl;

    for (int j = 0; j < arrNumLen - 1; j++) {
        for (int i = 0; i < arrNumLen - j - 1; i++) {
            if (arrNum[i] > arrNum[i + 1]) {
                int tmp = arrNum[i];
                arrNum[i] = arrNum[i + 1];
                arrNum[i + 1] = tmp;
            }
        }
    }
    // for (int i = 0; i < arrayNumLenght; i++) {
    //     std::cout << arrayNum[i] << std::endl;
    // }
}

void priArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void arrCount() {
    int arrWasCount = 0;
    std::ifstream midExam("./midExam.csv");
    std::string data;
    if(midExam.is_open()) {
        getline(midExam, data);
        while(midExam.eof() == 0) {
            getline(midExam, data);
            arrWasCount++;
        }
        // std::cout << arrWasCount;
        midExam.close();
    } else {
        std::cerr << "File 404\n";
    }
}

int main() {
    // int data[] = {234, 2, 34, 23, -23};
    int data1[] = {34, 45, -45, 213, 23, -134};
    int data2[] = {90, -34, 45, 678, -45, 22, 345, 2, 10};

    int dataLen1 = sizeof(data1) / sizeof(data1[0]);
    int dataLen2 = sizeof(data2) / sizeof(data2[0]);

    int mergeArr[dataLen1 + dataLen2];
    // int *mergeArr;
    // mergeArr = new int[dataLen1 + dataLen2];
    int i = 0;
    // for (int j = 0; j < dataLen1; j++) {
    for (int j = dataLen1 - 1; j >= 0; j--) {
        mergeArr[i++] = data1[j];
    }
    // for (int j = 0; j < dataLen2; j++) {
    for (int j = dataLen2 - 1; j >= 0; j--) {
        mergeArr[i++] = data2[j];
    }
    int mergeArrLen = sizeof(mergeArr) / sizeof(mergeArr[0]);
    // delete []mergeArr;

    sorting(data1, dataLen1);
    sorting(data2, dataLen2);
    std::cout << std::endl;
    priArr(data1, dataLen1);
    priArr(data2, dataLen2);
    std::cout << std::endl;
    sorting(mergeArr, mergeArrLen);
    priArr(mergeArr, mergeArrLen);

    homework();
    // cout << "Hello world!" << endl;
    return 0;
}
