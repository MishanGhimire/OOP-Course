// #include<iostream>
// using namespace std;
// template<class RT,class T1,class T2>
// RT getMax(T1 x,T2 y){
//     return (x>y)?x:y;
// }
// // int getmax(int x,int y){
// //     return (x>y)?x:y;
// // }
// // float getmax(float x,float y){
// //     return (x>y)?x:y;
// // }
// // char getmax(char x,char y){A
// //     return (x>y)?x:y;
// // }
// int main(){
//     // cout<<getmax<int>(10,20)<<endl;
//     // cout<<getmax<float>(20.33f,20.44f)<<endl;
//     // cout<<getmax<char>('a','b')<<endl;
//     cout<<getMax<double,int,double>(10,20.1);
//     return 0;
// }

#include <iostream>
using namespace std;
class Footer{
    protected:
    string footer = "Mishan Ghimire";
};
template<class T>
class Book:public Footer{ //template class
    T pagecontent;
    public:
    Book(T arg){
        pagecontent=arg;
    }
    void readpage(){
        cout<<pagecontent;
        cout<<endl<<footer;
    }
};
int main(){
    string strcontent="mishan";
    Book <string>b1(strcontent);
    b1.readpage();
    cout<<endl;
    int intcontent = 12345;
    Book<int>b2(intcontent);
    b2.readpage();
    return 0;
}