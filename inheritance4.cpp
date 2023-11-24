#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    float salary;

public:
    Employee() {}
    Employee(string name, float salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void getdata()
    {
        cout << name << "\t" << salary;
    }
};
class Developer : public Employee
{
private:
    string planguage;

public:
    Developer(string name, float salary, string planguage) : Employee(name, salary)
    {

        this->planguage = planguage;
    }

    void getdata()
    {
        cout << name << "\t" << salary << "\t" << planguage;
    }
};

int main()
{
    Developer d1("Mishan", 12000.254, "c++");
    d1.getdata();
    return 0;
}