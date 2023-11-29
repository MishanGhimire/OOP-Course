#include <iostream>
using namespace std;

void modifyReference(int &x) {
    x = x * 2;
}

int main() {
    int num = 5;
    modifyReference(num);
    cout << "Modified value: " << num << endl;  // Output: Modified value: 10
    return 0;
}
