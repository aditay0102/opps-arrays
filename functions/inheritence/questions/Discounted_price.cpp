#include <iostream>
using namespace std;

class item{
    public:
    int item_no,price;
    int less = item_no*price;
    string name;

    void getinfo(){
        cout<<"Enter the item no"<<endl;
        cin>>item_no;
        cout<<"Enter the price "<<endl;
        cin>>price;
        cout<<"Ente your Name"<<endl;
        cin>>name;

    }
};

class Discounted_items:public item{
        public:
        int discount = less; 

        void dis(){
            
            cout<<"customer "<<name<<endl;
            cout<<"the discounted price is"<<endl;
            cout<<discount<<endl;
        }
};

int main(){
        item person;
        person.getinfo();
        Discounted_items endprice;
        endprice.dis();

       
return 0;
}