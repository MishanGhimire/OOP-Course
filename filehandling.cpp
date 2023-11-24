#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "Enter your name:";
    cin >> name;
    cout<<name<<endl;
    cin.getline(name, 6);
    cin.read(name, 6);
    cout.write(name, 6) << endl;
    cout << name;

    char ch;
    cout << "Enter any character: ";
    cin.get(ch);
    cout.put(ch);
    cout.put('a');
    cout.put(97);

    return 0;
}


// tellg tellp