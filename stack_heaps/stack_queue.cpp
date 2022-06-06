include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int x;
	
	int a;
	
	 queue<int>q;
	 
	 
	 for(x=0; x<=5; x++){
	 	
	 	cout<<"Enter the element to be inserted:";
	 	
	 	cin>>a;
	 		 	
	 	q.push(a);
	 	
	 	
	 }
	 
	 cout<<q.front()<<endl;   // returns the first element
	 
	 cout<<q.size()<<endl;  // returns the no of elements
	 
	 cout<<q.back()<<endl;  // returns the last element
	  
	 
return 0;
}