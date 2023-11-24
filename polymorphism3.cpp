#include <iostream>
using namespace std;
class Instrument
{
public:
    virtual void makeSound() = 0;
};
class Piano : public Instrument
{
    void makeSound()
    {
        cout << "Piano Playing.....";
    }
};
int main()
{
    Instrument *ptr = new Piano;
    return 0;
}