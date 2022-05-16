#include <iostream>
using namespace std;

// CPP Program to illustrate early binding.
// Any normal function call (without virtual)
// is binded early. Here we have taken base
// and derived class example so that readers
// can easily compare and see difference in
// outputs.
   
class Base
{
public:
    void show() { cout<<" In Base \n"; } // use virtual before void
};
    
class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};
    
int main(void)
{
    Base *bp = new Derived;
  
    // The function call decided at 
    // compile time (compiler sees type
    // of pointer and calls base class
    // function.
    bp->show();  
return 0;
}