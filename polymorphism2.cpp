#include <iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"I can draw";
    }
};
class Triangle:public Shape{
    public:
    void draw(){
    cout << "I am drawing";
    }
};
class Rectangle:public Shape{
    public:
    void draw(){
    cout << "I am not drawing";
    }
};
int main(){
    Shape*ptr[] = {new Triangle,new Rectangle};
    for (int i=0; i<2;i++){
        ptr[i]->draw();
    }
    return 0;
}