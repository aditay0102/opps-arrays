#include <iostream>
using namespace std;

class Myname{
    public:
    string name;
    void mynameis(){
        cout<<name;
    }

};

int main(){
    Myname aobject1 ;
    aobject1.name ="Ram";
    aobject1.mynameis();
return 0;
}