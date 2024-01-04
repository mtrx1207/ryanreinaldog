#include <iostream>

class ParentClass {
public:
    void parentMethod() {
        std::cout << "This is a method in the parent class." << std::endl;
    }
};

class ChildClass : public ParentClass {
public:
    void childMethod() {
        std::cout << "This is a method in the child class." << std::endl;
    }
};

int main() {
    // Create an object of the child class
    ChildClass childObj;

    // Call the method from the parent class using the child class object
    childObj.parentMethod();

    return 0;
}