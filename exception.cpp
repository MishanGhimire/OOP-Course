#include<iostream>
using namespace std;

int main(){

    try{
        int x = 0;

        int result = 10 / x;
        cout<<result;
    }catch(const exception& e){
        cerr<<e.what();
    }
    return 0;
}