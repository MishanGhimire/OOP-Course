#include <iostream>
using namespace std;
class Base {
public:
    Base() {
        cout << "Base constructor" << endl;
    }

    virtual ~Base() {
        cout << "Base destructor" << endl;
    }

    virtual void someFunction() {
        cout << "Base::someFunction()" << endl;}};
class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor" << endl;
    }

    ~Derived() override {
        cout << "Derived destructor" << endl;
    }

    void someFunction() override {
        cout << "Derived:someFunction()" <<endl;
    }
};

int main() {
    Base* Ptr = new Derived; 
    delete Ptr;
    return 0;
}