#include <iostream>
using namespace std;

class Demo{
    private:
    int len1,len2;

    public:
    Demo(){
        len1 =20;
        len2 =20;
    }
    void display(){
        cout<<(len1*len2)/2<<endl;
    }
};


int main(){
        Demo obj;
        obj.display();
return 0;
}