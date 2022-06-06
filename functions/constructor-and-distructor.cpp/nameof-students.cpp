#include <iostream>
using namespace std;

class Student{
    private:
    string name ;
    public:
    Student(){
        name = "unknown";
    }
    Student(string a){
        name  = a;
    }
    
    void display(){
        cout<<"The name of the student is "<<name<<endl;
    }
    ~Student(){
        cout<<"object destroyed"<<endl;
    }
};

int main(){
    string name ;
    cin>>name;

    Student b,a(name);
    a.display();
    cout<<endl;
    b.display();
return 0;
}