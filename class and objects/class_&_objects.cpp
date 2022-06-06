#include <iostream>
using namespace std;

class Myfirstclass{
    public:// three types public private and protected;
    int variable1;//data mimber1
};


int main(){
    Myfirstclass object1;
    object1.variable1=10;
    cout<<object1.variable1;
return 0;
}