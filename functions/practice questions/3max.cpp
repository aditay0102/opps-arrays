#include <iostream>
#include <algorithm>
using namespace std;

int maxof3(int a,int b,int c){
    int ans = max(max(a,b),c);
    return ans;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maxof3(a,b,c);

return 0;
}