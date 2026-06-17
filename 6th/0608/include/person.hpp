#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
#include <string>

class person {
public:
    person();
    virtual ~person();
    void setName(std::string a) {
        name = a;
    }
    void setId(std::string a) {
        id = a;
    }
    void setAge(int a) {
        age = a;
    }
    std::string getName() {
        return name;
    }
    std::string getId() {
        return id;
    }
    int getAge() {
        return age;
    }
protected:

private:
    std::string name;
    int age;
    std::string id;
};

#endif // PERSON_HPP