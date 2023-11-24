#include <iostream>
using namespace std;
class Instrument
{
public:
    virtual void  makeSound()
    {
        cout << "Instrument Playing....";
    }
};
class Piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "piano playing...";
    }
};
int main()
{
    Instrument *ptr = new Piano;
    ptr->makeSound();
    return 0;
}