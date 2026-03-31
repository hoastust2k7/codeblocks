#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>

// using namespace std;

void a024() {
    int x, y, z;
    std::cin >> x >> y;
    while(y != 0) {
        z = x % y;
        x = y;
        y = z;
    }
    std::cout << x;
}

void a034() {
    int x, y, z;
    std::cout << x << y << z;
}

int first() {
    std::string dataPath, data, isID, isName, isScore, dataValue;
    float dataScoreValue;
    bool dataValueFound = false;
    dataPath = "./score.csv";
    std::cout << "--------------------------------" << std::endl;
    std::cout << "請輸入學號或姓名：";
    // std::cin >> dataValue;
    std::cin >> dataScoreValue;
    std::cout << "--------------------------------" << std::endl;
    std::ifstream myFile(dataPath);
    if(myFile.is_open() ) {
        // getline(myFile, data);
        while(myFile.eof() == 0) {
            getline(myFile, data);
            std::stringstream token(data);
            getline(token, isID, ',');
            getline(token, isName, ',');
            getline(token, isScore, ',');
            if(dataScoreValue >= std::stof(isScore)) {
            // if(((isID.find(dataValue)) != std::string::npos) ||
            // ((isName.find(dataValue)) != std::string::npos)) {
                dataValueFound = true;
                std::cout << "================================" << std::endl;
                std::cout << "帳號：" << isID << std::endl;
                std::cout << "名稱：" << isName << std::endl;
                std::cout << "成績：" << isScore << std::endl;
                std::cout << "================================" << std::endl;
            }
        }
        if(!dataValueFound) {
            std::cerr << "查無此人(404)\n";
        }
        myFile.close();
    } else {
        std::cerr << "File 404\n";
    }
    return first();
}

void second() {

}


int main() {
    system("PAUSE");
    // a024();
    // a034();
    first();
    // cout << "Hello world!" << endl;
    return 0;
}
