#include <iostream>
using namespace std;

class info{
    public:
    string name;
    int age;

};

class student_info:public info{
    public:
    string school;
    int date;

    void enter_info(){
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"enter the age of the student"<<endl;
        cin>>age;
        cout<<"enter the your school"<<endl;
        cin>>school;
        cout<<"enter the date "<<endl;
        cin>>date;
    };

    void info(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<"School"<<endl;
        cout<<date<<endl;
    }
};


int main(){
    student_info person;
    person.enter_info();
    person.info();
return 0;
}