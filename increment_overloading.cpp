#include <iostream>
using namespace std;

class Complex{
    private:
        int real,imaginary;   //ptrivate data member of a class
    public:
    Complex(){}  //default constructor
    Complex(int _real,int _imaginary){
        real = _real;
        imaginary = _imaginary;  //initailizing the object using constructor
    }
    void getdata1(){
        cout<<"The increment is:"<<endl<<real<<"  "<<imaginary<<endl;
    }
    void getdata2(){
        cout<<"The sum is:"<<endl<<real<<" + "<<imaginary<<endl;
    }
    void getdata3(){
        cout<<"The difference is:"<<endl<<real<<"  -  "<<imaginary<<endl; 
    }
    void getdata4(){
        cout<<"The decrement is:"<<endl<<real<<"  "<<imaginary<<endl;
    }
    Complex operator-(Complex c){   //operator function as a member function of class Complex
        Complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        return temp;
    }
    Complex operator++(){  //operator function as a member function of class Complex
        Complex temp;
        temp.real = real + 1 ;
        temp.imaginary = imaginary + 1 ;
        return temp;
    }
    Complex operator--(){  //operator function as a member function of class Complex
        Complex temp;
        temp.real = real - 1 ;
        temp.imaginary = imaginary - 1 ;
        return temp;
    }
    Complex operator+(Complex c){  //operator function as a member function of class Complex
        Complex temp;
        temp.real = real+ c.real;
        temp.imaginary = imaginary+ c.imaginary;
        return temp;
    }
};
int main(){
    Complex c1(10,20),c2(30,40),c3,c4,c5,c6;  //Creating a object of class Complex
    c3 = c1 - c2;
    c4 = c1 + c2;
    c5=++c1;   //c1 is the calling object
    c6=--c2;
    c3.getdata3();
    c4.getdata2();
    c5.getdata1();
    c6.getdata4();
    return 0;
}
