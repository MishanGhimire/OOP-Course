#include<iostream>
using namespace std;

void increment(int& num){
    num++;
};

int main(){
    int value = 10;

    cout<<"Before= "<<value<<endl;

    increment(value);

    cout<<"After= "<< value<<endl;

    return 0;
}