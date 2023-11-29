#include <iostream>
using namespace std;

namespace first{
    void showinfo(){
        cout<<"Inside first"<<endl;
    }
}
namespace second{
    void showinfo(){
        cout<<"Inside Second"<<endl;
    }
}
int main(){
    first::showinfo();
    second::showinfo();
    return 0;
}