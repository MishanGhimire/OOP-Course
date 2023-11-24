#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
    protected:
    int r;
    public:
	virtual void area()=0;  // pure virtual function
};
class circle: public shape
{
   float r; //r=radius
   public:
   void area()
   {
       cout<<"\nEnter radius of circle : ";
       cin>>r;
       cout<<"\nArea of circle : "<<(3.14*r*r);
   }
};
class rectangle: public shape
{
	int r; // l=length , b=bredth
	public:
   void area()
   {
       cout<<"\nEnter radius of sphere : ";
       cin>>r;
       cout<<"\nArea of sphere : "<<((4/3)*3.14*r*r*r);
   }
};
int main()
{
   circle c; // object created
   c.area();
   rectangle r; // object created
   r.area();
   return(0);
}