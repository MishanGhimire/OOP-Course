#include <iostream>
using namespace std;
class Instrument
{
public:
    virtual void makeSound()
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
class Guiter : public Instrument
{
public:
    void makeSound()
    {
        cout << "Guiter Playing....";
    }
};
int main()
{
    Instrument *ptr[] = {new Piano, new Guiter};
    for (int i = 0; i < 2; i++)
    {
        ptr[i]->makeSound();
    }
    return 0;
}