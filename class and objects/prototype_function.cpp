#include <iostream>
using namespace std;

class MySecondClass{
    public:
    void mySecondMethod();
};

void MySecondClass:: mySecondMethod(){
    cout<< "welcom to c++ member functions";
}

int main(){
    MySecondClass myObject;
    myObject.mySecondMethod();
return 0;
}