// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int real, imaginary;

// public:
//     Complex() {}
//     Complex(int rl, int im)
//     {
//         real = rl;
//         imaginary = im;
//     }

//     void getdata() const
//     {
//         cout << "The sum is:" << endl
//              << real << "+" << imaginary << "i" << endl;
//     }

//     friend Complex operator+(Complex &c1, Complex &c2);
// };

// Complex operator+(Complex &c1, Complex &c2)
// {
//     Complex temp;
//     temp.real = c1.real + c2.real;
//     temp.imaginary = c1.imaginary + c2.imaginary;
//     return temp;
// }

// int main()
// {
//     Complex c1(10, 30), c2(30, 40), c3, c4;
//     c3 = c1 + c2;
//     c3.getdata();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int real, imaginary;

// public:
//     Complex() {}
//     Complex(int rl, int im)
//     {
//         real = rl;
//         imaginary = im;
//     }

//     void getdata() const
//     {
//         cout << "The difference is:" << endl
//              << real << "-" << imaginary << "i" << endl;
//     }

//     friend Complex operator+(Complex &c1, Complex &c2);
// };

// Complex operator+(Complex &c1, Complex &c2)
// {
//     Complex temp;
//     temp.real = c1.real - c2.real;
//     temp.imaginary = c1.imaginary - c2.imaginary;
//     return temp;
// }

// int main()
// {
//     Complex c1(10, 30), c2(30, 40), c3, c4;
//     c3 = c1 + c2;
//     c3.getdata();
//     return 0;
// }


#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    public:
    Complex(){}
    Complex(int rl){
        real=rl;
    }

Complex operator++(int){
    Complex temp;
    real++;
    return temp;
}
void getdata() const{
    cout<< "the result is:"<<endl<<real;
}

};
int main(){
    Complex c1=10;
    c1++;
    c1.getdata();
    return 0;
}



















