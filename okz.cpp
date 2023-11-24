// C++ program to create a global function as a friend
// function of some class
#include <iostream>
using namespace std;

class base {
private:
	int private_var;

protected:
	int protected_var;

public:
	base()
	{
		private_var = 10;
		protected_var = 50;
	}
	
	// friend function declaration
	friend void friendFunction(base& obj);
};


// friend function definition
void friendFunction(base& obj)
{
	cout << "Private Variable: " << obj.private_var
		<< endl;
	cout << "Protected Variable: " << obj.protected_var;
}

// driver code
int main()
{
	base object1;
	friendFunction(object1);

	return 0;
}
