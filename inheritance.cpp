// #include<iostream>
// using namespace std;
// class counter{
//     private:
//     int count;
//     public:
//     counter(){
//         count=0;
//     }
//     void operator++(){
//         this->count=count+1;//count+=1
//     }
//     void getdata(){
//         cout<<count;
//     }
// };
// int main(){
//     counter c1;
//     ++c1;
//     c1.getdata();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void sleep(){
//         cout<<"I can sleep";
//     }
//     void eat(){
//         cout<<"I can eat";
//     }
//     void walk(){
//         cout<<"I can walk";
//     }
//     void sit(){
//         cout<<"I can sit";
//     }
// };
// int main(){
//     Animal a1;
//     a1.eat();
//     cout<<endl;
//     a1.sleep();
//     cout<<endl;
//     a1.walk();
//     cout<<endl;
//     a1.sit();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class animal{
//     public:
//     void sleep(){
//         cout<<"i am sleeping at night"<<endl;
//     }
//     void play(){
//         cout<<"i love playing at noon"<<endl;
//     }
// };
// class animalma:public animal{
//     public:
//     void getdata(){
//         cout<<"if i am angry i hit you";
//     }
// };
// int main(){
//     animalma c1;
//     c1.sleep();
//     c1.play();
//     c1.getdata();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Base{
//     protected:
//     int x;
//     public:
//     void getdata(){
//         cout << "Enter the value of x = ", cin>> x;
//     }
// };
// class Derived : public Base{
//     private:
//     int y;
//     public:
//     void readdata(){
//         cout << "Enter the value of y = ";
//         cin>>y;

//     }
//     void product(){
//         cout << "product x=" << x * y;
//     }
// };
// int main(){
//     Derived d;
//     d.getdata();
//     d.readdata();
//     d.product();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     void display()
//     {
//         cout << "Base class content.";
//     }
// };
// class B : public A
// {
// };
// class C : public B
// {
// };

// int main()
// {
//     C obj;
//     obj.display();
//     return 0;
// }


#include <iostream>
using namespace std;
class Animal{
    public:
    void info() {
        cout << "I am an animal." << endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout << "I am a Dog. Woof woof." << endl;
    }
} ;
class Cat : public Animal{
    public:
    void meow() {
        cout << "I am a cat.Meow" << endl;
    }
};
int main(){
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info();
    dog1.bark();
    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.info();
    cat1.meow();
    return 0;
}