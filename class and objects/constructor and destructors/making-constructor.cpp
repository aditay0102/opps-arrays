#include <iostream>
using namespace std;

class cube{
    public:
   int  side;
   public:
        cube(){
            side=10;
        }
};


int main(){
        cube c;
        cout<<"Value is "<<c.side;
return 0;
}