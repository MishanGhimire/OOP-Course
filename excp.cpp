#include <iostream>
using namespace std;
class Printer
{
    int availablepages;
    string name;

public:
    Printer(string name, int availablepages)
    {
        this->availablepages = availablepages;
        this->name = name;
    }
    void print(string content)
    {
        int requiredpages = content.length() / 5;
        if (requiredpages>availablepages)
        {
            //throw "pages not sufficient";
            throw"101";
        }
        else{
            cout<<"printing"<<content;
            availablepages-= requiredpages;
        }
        
    }
};
int main()
{
    Printer p1("hp", 5);
    string content = "Mishan Dai";
    try{
        p1.print(content);
        p1.print(content);
        p1.print(content);
    }
    catch(const char* ptr){
        cout<<ptr;
    }
        catch(int x){
        cout<<x;
    }
        catch(...){
        cout<<"default handling";
    }
    p1.print(content);
    return 0;
}