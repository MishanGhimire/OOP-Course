// Example: Explicit copy constructor

#include <iostream>
using namespace std;

class Sample{

    public:
        int id;

        Sample(){
            id = 5;
            cout << "Default Constructor Called:" << endl;
        }

        Sample(int x){
            cout << "\n\nParameterized Constructor Called:" << endl;
            id = x;
        }
    
        Sample(Sample &s){
            cout << "\n\nCopy Constructor Called:" << endl;
            id = s.id + 5;
        }

        void display(){
            cout << "ID = " << id;
        }
};

int main(){

    Sample obj;
    obj.display();

    Sample obj1(10);
    obj1.display();
    
    Sample obj2(obj1);
    obj2.display();

    return 0;
}