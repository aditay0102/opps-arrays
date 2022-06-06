#include <iostream>
using namespace std;

class unary{
    private:
    int a,b,c;
    public:
    unary(int x,int y,int z){
        a = x;
        b = y;
        c = z;
    }

    void display(){
        cout<< a <<" "<< b <<" "<<c;
    }
    void operator ++(){ 
        a++; b++;
    }
    
};
int main()
    unary obj(10,20,30);
    cout<<"Before increment: "<<endl;
    obj.display();
    ++obj;
    cout<<endl<<"After operator overloading: "<<endl;
    obj.display();
return 0;
}