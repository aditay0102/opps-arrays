#include <iostream>
using namespace std;

void primenum(int a){
    if (a%2 !=0 || a ==2){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime "<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    primenum(n);
}