// #include <iostream>
// using namespace std;

// float area(int);
// int area(int,int);
// float area(int,double);

// int main(){
//     cout<<area(5)<<endl;
//     cout<<area(5,4)<<endl;
//     cout<<area(5,3.5)<<endl;
// }
// float area(int r){
//     return(3.14*r*r);
// }
// int area(int l,int b){
//     return(l*b);
// }
// float area(int b,double h){
//     return(0.5*b*h);
// }

#include <iostream>
using namespace std;

float perimeter(float);
int perimeter(int,int);
int perimeter(int,int,int);

int main(){
    cout<<"Perimeter of a circle: "<<perimeter(2.0)<<endl;
    cout<<"Perimeter of a rectangle: "<<perimeter(10,10)<<endl;
    cout<<"Perimeter of a triangle: "<<perimeter(5,10,15)<<endl;
}

float perimeter(float r){
    return(2*3.14*r);
}
int perimeter(int l,int b){
    return(2*(l+b));
}
int perimeter(int a,int b,int c){
    return(a+b+c);
}
