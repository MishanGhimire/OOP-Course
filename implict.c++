// #include<iostream>
// using namespace std;
// class complex{
//     private:
//     int real;
//     int imaginary;
//     public:
//     complex(){}
//     complex(int real,int imaginary){
//         this->real=real;
//         this->imaginary=imaginary;
//     }
//     void getdata(){
//         cout<<real;
//     }
//     complex(int x){
//         real=x;
//     }
// };
// int main(){
//     complex c1(10,20),c2;
//     int x=11;
//     c1=x;
//     c1.getdata();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class complex{
//     public:
//     int real,imaginary;
//     public:
//     void setdata(int rl,int img){
//         real=rl;imaginary=img;
//     }
//     void getdata(){
//         cout<<real<<"+"<<imaginary;
//     }
//     operator int(){
//         return (real);
//     }
// };
// int main(){
//     complex c1;
//     c1.setdata(2,3);
//     int x;
//     x=c1;
//     cout<<x;
//     return 0;
// }

#include <iostream>
using namespace std;

class Product{
    private:
        int x, y;
    
    public:
        Product(int x, int y){
            this->x = x;
            this->y = y;
        }

        int getA(){
            return this->x;
        
        }
        int getB(){
            return this->y;
        }
        void getData(){
            cout << this->x <<","<< this->y << endl; 
        }

};

class Item{
    private:
    int a,b;

public:
        Item(){}
        Item(int a,int b){
            this->a = a;
            this->b = b;
        }
        void getData(){
        cout<<a<<","<<b<<endl;
        }
        Item (Product p1){
            a = p1.getA();
            b = p1.getB();
        }
};
int main()
{
    Item i1;
    Product p1(4,5);
    i1=p1;
    p1.getData();
    i1.getData();
    return 0;

}
