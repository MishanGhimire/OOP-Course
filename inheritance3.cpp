#include<iostream>
using namespace std;
class A{
public:
void re(){
    cout<<"first class";
}
};

class B:public A{
    public:
    void fe(){
        cout<<"second class";
    }
};

class BA:public A{

};
class C{
public:
void gr(){
    cout<<"third class";
}
};

class D:public B,public C{
    public:
    void hy(){
        cout<<"fourth class";
    }
};
int main(){
    D d1;
    d1.re();
    d1.fe();
    d1.gr();
    d1.hy();
}