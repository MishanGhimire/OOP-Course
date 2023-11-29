#include <iostream>
using namespace std;

void modifyValue(int x){
    x = x * 2;
}
int main(){
    int num = 5;
    modifyValue(num);
    cout<<"Original value: "<<num<<endl;
    return 0;
}
