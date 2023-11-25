#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // const int a = 3;
    // cout << "The value of a was: " << a;
    // a = 45;
    // cout << "The value of a is: " << a;
    // constant in c++
    // const int a = 3;
    // int a = 3, b = 78, c =123;
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;
    
    // Operator precedence
    int a = 3, b = 4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}