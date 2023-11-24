#include<iostream>
#include<fstream>
using namespace std;
int main() {
    fstream fs;
    char name[100];
    fs.open("example.txt",ios::out|ios::in);
    cout<<"Hello world I am Luffy."<<endl;
    cout<<"Current position of put pointer is:";
    cout<<fs.tellp()<<endl;
    cout<<"------------------"<<endl;
    fs.seekg(12,ios::beg);
    cout<<"current position of get pointer is: ";
    cout<<fs.tellg()<<endl;
    fs.getline(name,50);
    cout<<name;
    return 0;
}