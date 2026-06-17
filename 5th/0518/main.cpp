#include <iostream>
#include <iomanip>

// using namespace std;

class person {
    // public:
    std::string name, id;
    float score;
public:
    person() {
        name = "Name404";
        id = "ID404";
        score = 0;
    }
    person(std::string isName) {
        name = isName;
        id = "ID404";
        score = 0;
    }
    person(std::string isName, float isScore) {
        name = isName;
        id = "ID404";
        score = isScore;
    }
    person(std::string isName, std::string isID, float isScore) {
        name = isName;
        id = isID;
        score = isScore;
    }
    void print() {
        std::cout << "name = " << name << ", id = " << id << ", score = " << score << std::endl;
    }
};

void first() {
    // person peter, mary = {"mary", "114514", 67};
    person mary("mary", "114514", 67);
    person peter("peter", 67.67);
    person tom;

    // peter.name = "peter";
    // peter.id = "115515";
    // peter.score = 67.67;

    // mary.name = "mary";
    // mary.id = "114514";
    // mary.score = 67;

    // std::cout << "name = " << peter.name << ", id = " << peter.id << ", score = " << peter.score << std::endl;
    mary.print();
    peter.print();
    tom.print();


}

class personBmi {
    std::string name;
    float height, weight, bmiResult;
public:
    personBmi() {
        name = "Name 404";
        height = 0;
        weight = 0;
        // bmiResult = (weight / ((height*height) / 100);
        bmiResult = 0;
    }
    personBmi(std::string isName) {
        name = isName;
        height = 0;
        weight = 0;
        bmiResult = 0;
        // bmiResult = weight / ((height*height) / 10000);
    }
    personBmi(std::string isName, float isHeight, float isWeight) {
        name = isName;
        height = isHeight;
        weight = isWeight;
        bmiResult = weight / ((height*height) / 10000);
    }
    void bmiStatus(float bmiResult) {
        if (bmiResult == 0) {
            std::cout << "BMI 404" << std::endl;
        } else if(bmiResult >= 18.5 && bmiResult < 24) {
            std::cout << "正常範圍" << std::endl;
        } else if(bmiResult < 27) {
            std::cout << "異常範圍 >>> 過重！" << std::endl;
        } else if(bmiResult < 30) {
            std::cout << "異常範圍 >>> 輕度肥胖！" << std::endl;
        } else if(bmiResult < 35) {
            std::cout << "異常範圍 >>> 中度肥胖！" << std::endl;
        } else if(bmiResult >= 35) {
            std::cout << "異常範圍 >>> 重度肥胖！" << std::endl;
        }
        else {
            std::cout << "體重過輕" << std::endl;
        }
    }
    void printBmi() {
        std::cout << std::fixed << std::setprecision(1) << "姓名：" << name << ", 身高(cm)：" << height << ", 體重(kg)：" << weight << ", BMI：" << bmiResult << ", BMI狀態：";
        bmiStatus(bmiResult);
    }
};

void second() {
    personBmi mary("mary", 170, 70);
    personBmi peter("peter", 180, 80);
    personBmi tom("tom", 180, 90);
    personBmi john("john");

    mary.printBmi();
    peter.printBmi();
    tom.printBmi();
    john.printBmi();
}

int main() {
    // first();
    second();
    // cout << "Hello world!" << endl;
    return 0;
}
