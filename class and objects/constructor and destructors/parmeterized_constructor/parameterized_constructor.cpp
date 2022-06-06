#include <iostream>
using namespace std;

class Demo{
    private:
    int l,b;

    public:
    int a,b;
       
    int area(){
        int ans =(a*b);
        cout<<"area is "<<ans;
    }
};


int main(){
    int a,b;
    cin>>a>>b;
        Demo obj;
        obj.area(a,b);
return 0;
}