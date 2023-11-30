/*Create a class author with attributes name and qualification.
Also create a class publication with pname.
From these classes derive a classes derive a class book having attributes title and price.
Each of the three classes should have getdata() method to get their data from user.
The classes should have putdata() method to display the data.
Create instance of the class book in main.*/


#include<iostream>
using namespace std;

class Author
{
public:
    string name, quali;
    void getdata(){
        cout<<"Enter Name:";
        cin>>name;

        cout<<"Enter Qualification:";
        cin>>quali;
    }
};

class Publication
{
public:
    string pname;


    void getdata()
    {
        cout<<"Enter Pname:";
        cin>>pname;
    }
};

class Book: public Author, public Publication
{
public:
    string title;
    double price;

    void getdata()
    {
        cout<<"Enter Title:";
        cin>>title;

        cout<<"Enter Price:";
        cin>>price;
    }
    void putdata()
    {
     cout << "\n\n========== BOOK INFO ==========";
     cout << "\nBook Author               :   " << name;
     cout << "\nBook Author Qualification :   " << quali;
     cout << "\nBook Publication          :   " << pname;
     cout << "\nBook Name                 :   " << title;
     cout << "\nBook Price                :   Rs." << price;
    }

};

int main()
{
    Book bk;

    bk.Author::getdata();
    bk.Publication::getdata();
    bk.getdata();

    bk.putdata();

    return 0;
}