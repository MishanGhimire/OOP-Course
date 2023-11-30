#include <iostream>
using namespace std;

class construct {
public:
    int a, b;

    // Default constructor
    construct() {
        a = 20;
        b = 10;
    }
};

int main() {
    // Creating an object of the 'construct' class
    construct obj;

    // Accessing the member variables of the object
    cout << "a: " << obj.a << endl;
    cout << "b: " << obj.b << endl;

    return 0;
}
