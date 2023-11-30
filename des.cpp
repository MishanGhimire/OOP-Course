#include <iostream>
using namespace std;
class example
{
    int a;

public:
    example()
    {
        a = 0;
        cout << "\n Inside the constructor";

    }
    ~example()
    {
        cout << "a=" << a;
        cout << "\n Inside the destructor";
    }
};
int main()
{
    example e;
    cout << "Hello";
    return 0;
}