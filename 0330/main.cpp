#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

// using namespace std;

void first() {
    std::ifstream myFile("C:\\Users\\STUST\\codeblocks\\0330\\Preview_Data.csv");
    std::string data;
    if(myFile.is_open() ) {
        while(myFile.eof() == 0) {
            getline(myFile,data);
            std::stringstream token(data);
            std::cout << data << std::endl;
        }
        myFile.close();
    } else {
        std::cerr << "404";
    }
}

void second() {
    std::ifstream myFile("C:\\Users\\STUST\\codeblocks\\0330\\DataOnSanitation.csv");
    std::string data;
    if(myFile.is_open() ) {
        while(myFile.eof() == 0) {
            getline(myFile,data);
            std::stringstream token(data);
            std::cout << data << std::endl;
        }
        myFile.close();
    } else {
        std::cerr << "404";
    }
}

void third() {
    std::ifstream myFile("C:\\Users\\STUST\\codeblocks\\0330\\DataOnSanitation.csv");
    std::string data, countyCode, organizationName, organizationAddress, organizationTel;
    if(myFile.is_open() ) {
        getline(myFile, data);
        while(myFile.eof() == 0) {
            getline(myFile, data);
            std::stringstream token(data);
            getline(token, countyCode, ',');
            getline(token, organizationName, ',');
            getline(token, organizationAddress, ',');
            getline(token, organizationTel, ',');
            std::cout << "區域碼：" << countyCode << std::endl;
            std::cout << "單位名稱：" << organizationName << std::endl;
            std::cout << "地址：" << organizationAddress << std::endl;
            std::cout << "電話：" << organizationTel << std::endl;
            // break;
        }
        myFile.close();
    } else {
        std::cerr << "404";
    }
}

void fourth() {
    bool cityValueFound = false;
    std::string data, countyCode, organizationName, organizationAddress, organizationTel, cityValue;
    std::cout << "請輸入縣市：";
    std::cin >> cityValue;
    std::cout << "--------------------------------" << std::endl;
    std::ifstream myFile("C:\\Users\\STUST\\codeblocks\\0330\\DataOnSanitation.csv");
    if(myFile.is_open() ) {
        // getline(myFile, data);
        while(myFile.eof() == 0) {
            getline(myFile, data);
            std::stringstream token(data);
            getline(token, countyCode, ',');
            getline(token, organizationName, ',');
            getline(token, organizationAddress, ',');
            getline(token, organizationTel, ',');
            if((organizationAddress.find(cityValue)) != std::string::npos || (organizationName.find(cityValue)) != std::string::npos) {
                // std::cout << "區域碼：" << countyCode << std::endl;
                cityValueFound = true;
                std::cout << "================================" << std::endl;
                std::cout << "單位名稱：" << organizationName << std::endl;
                std::cout << "地址：" << organizationAddress << std::endl;
                std::cout << "電話：" << organizationTel << std::endl;
                std::cout << "================================" << std::endl;
            }
            if(!cityValueFound) {
                std::cerr << "404\n";
            }
        }
        myFile.close();
    } else {
        std::cerr << "404\n";
    }
}

void fifth() {
    bool cityValueFound = false;
    std::string data, siteName, uvi, unit, county, wgs84_lon, wgs84_lat, dataCreationDate, cityValue;
    std::cout << "請輸入縣市：";
    std::cin >> cityValue;
    std::cout << "--------------------------------" << std::endl;
    std::ifstream myFile("C:\\Users\\STUST\\codeblocks\\0330\\Preview_Data.csv");
    if(myFile.is_open() ) {
        // getline(myFile, data);
        while(myFile.eof() == 0) {
            getline(myFile, data);
            std::stringstream token(data);

            getline(token, siteName, ',');
            getline(token, uvi, ',');
            getline(token, unit, ',');
            getline(token, county, ',');
            getline(token, wgs84_lon, ',');
            getline(token, wgs84_lat, ',');
            getline(token, dataCreationDate, ',');

            if((county.find(cityValue)) != std::string::npos || (dataCreationDate.find(cityValue)) != std::string::npos) {
                cityValueFound = true;
                std::cout << "================================" << std::endl;
                std::cout << "測站名稱：" << siteName << std::endl;
                std::cout << "紫外線指數：" << uvi << std::endl;
                std::cout << "發布單位：" << unit << std::endl;
                std::cout << "縣市：" << county << std::endl;
                std::cout << "WGS84經度：" << wgs84_lon << std::endl;
                std::cout << "WGS84緯度：" << wgs84_lat << std::endl;
                std::cout << "資料發布日期：" << dataCreationDate << std::endl;
                std::cout << "================================" << std::endl;
            }
            if(!cityValueFound) {
                std::cerr << "404\n";
            }
        }
        myFile.close();
    } else {
        std::cerr << "404\n";
    }
}

int main() {
    system("pause");
    // first();
    // second();
    // third();
    // fourth();
    fifth();
//    cout << "Hello world!" << endl;
    return 0;
}
