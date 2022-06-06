#include <iostream>
#include <algorithm>
using namespace std;

int min2(int a,int b){
    int ans = min(a,b);
    return ans;
}

int min3(int a,int b,int c){
    int ans = min(min(a,b),c);
    return ans;
}

float minf2(float e, float f){
    float ans = min(e,f);
    return ans;
}

int main(){
    int a,b,c;
    float e,f;
    cin>>a>>b>>c>>e>>f;
    cout<<min2(a,b)<<endl;
    cout<<min3(a,b,c)<<endl;
    cout<<minf2(e,f)<<endl;
}