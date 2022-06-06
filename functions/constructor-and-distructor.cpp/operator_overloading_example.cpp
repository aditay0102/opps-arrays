#include <iostream>
using namespace std;

class complex{
private:
    int real, imag;
public:
    complex(){
        real =0;
        imag =0;
    }
    complex(int r , int i){
        real = r;
        imag =i;

    }
    void print(){
        cout<<real<<" + "<< imag <<"i"<<endl;
    }
    complex operator +(complex C){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};

int main(){
    complex c1(5,4);
    complex c2(2,5);
    complex c3;
    c3 = c1+c2;
    int x = 5;
    int y =4;
    int z = x+y;
    cout<<" z value"<<z<<endl;

return 0;
}