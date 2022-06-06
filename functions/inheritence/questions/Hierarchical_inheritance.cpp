#include <iostream>
using namespace std;

class info{
    public:
    string name = "adf"; 
};

class A1:public info{
    public:
    int age = 10;
};
class a:public A1{
    void data1(){
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter your age";
        cin>>age;
    }
};

class B1:public info{
    public:
    string home_name ;
};

class b:public B1{
    void data2(){
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter the home name "<<endl;
        cin>>home_name;
    }
};

int main(){

return 0;
}