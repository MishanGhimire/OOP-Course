#include <iostream>
using namespace std;
class Birthday
{
private:
    int day, month, year;

public:
    Birthday() {}
    Birthday(int day, int month, int year)
    {

        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setdata(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void printdata()
    {
        cout << day << month << year;
    }
    ~Birthday()
    {
        cout << "destructor of Birthday";
    }
};
class Person
{
private:
    string name;
    Birthday birthday;

public:
    Person() {}
    Person(string name) : birthday(8, 11, 1989)
    {

        this->name = name;
        birthday.setdata(8, 11, 1989);
    }
    void printdata()
    {
        birthday.printdata();
    }
    ~Person()
    {
        cout << "destructor of person";
    }
};
int main()
{
    {
        Person p1("raul");
        p1.printdata();
    }
    cout << "---------";
    return 0;
}