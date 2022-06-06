#include <iostream>
using namespace std;

class Demo{

    int d; // Data member
    public:
    Demo(int d){ // d is local variable of Demo constructor
        this->d = d; // only assign   local variable  d into local d the DM is hidden
    }
    void show(){
        cout<<"The value of D is "<< d;
    }
};
int main(){
    Demo obj(100);
    obj.show();
return 0;
}