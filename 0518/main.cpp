#include <iostream>

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
    void print() {
        std::cout << "name = " << name << ", id = " << id << ", score = " << score << std::endl;
    }
};

void first() {
    // person peter, mary = {"mary", "114514", 67};
    person peter, mary;

    // peter.name = "peter";
    // peter.id = "115515";
    // peter.score = 67.67;

    // mary.name = "mary";
    // mary.id = "114514";
    // mary.score = 67;

    // std::cout << "name = " << peter.name << ", id = " << peter.id << ", score = " << peter.score << std::endl;
    peter.print();
    mary.print();
}

int main() {
    first();

    // cout << "Hello world!" << endl;
    return 0;
}
