#include <iostream>
using namespace std;

void swapf(int a ,int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;
    swapf(a,b);
    
return 0;
}