#include "../include/scoreTable.hpp"
#include <sstream>
#include <iostream>
#include <fstream>

scoreTable::scoreTable(std::string file) {
    std::string temp;
    std::ifstream data(file);
    if (!data.is_open()) {
        std::cerr << "Failed to open file: " << file << std::endl;
    } else {
        int arrCount = 0;
        while (getline(data, temp)) {
            arrCount++;
        }
        data.clear();
        data.seekg(0, std::ios::beg);
        score = new student[arrCount];
        int i = 0;
        while (std::getline(data,temp)) {
            std::stringstream token(temp);
            std::string a1, a2, a3;
            getline(token, a1, ',');
            getline(token, a2, ',');
            getline(token, a3);
            score[i].add(a1, a2, a3);
            i++;
        }
        data.close();
    }
}

std::ostream& operator << (std::ostream& out, scoreTable& b) {
    // std::cout << b.arrCount << std::endl;
    for (int i = 0; i < 47; i++) {
        out << b.score[i].getName() << " " << b.score[i].getId() << " " << b.score[i].getScore() << std::endl;
    }
    return out;
}

scoreTable::scoreTable() {
}

scoreTable::~scoreTable() {
    delete[] score;
}