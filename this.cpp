#include<iostream>
using namespace std;

class A {
    public:
        int num1,num2;

        int add(int num1, int num2){
            this->num1=num1;
            this->num2=num2;
        }
        void display(){
            cout<<"Num1 ="<<num1<<endl<<"Num2 ="<<num2<<endl;
        }
};

int main(){
    A sum;
    sum.add(3,5);
    sum.display();
    return 0;
}