// If,Else and switch-case statement
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age: ";
    cin >> age;
    // Selection control structure: If - else if -else  ladder
    // if((age<18) && (age>0)){
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // else if(age == 18){
    //     cout<<"You are a kid and u will get a kid pass to the party"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }
    // Selection control structure: Switch case statements
    switch (age)
    {
    case 18:
        cout << "You are 18"<<endl;
        break;
    case 22:
        cout << "You are 22"<<endl;
        break;
    case 2:
        cout << "You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    return 0;
}