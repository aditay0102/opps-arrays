#include <iostream>
using namespace std;

class Vehicle{
    public:
    int milage;
    int price;
};

class carinfo:public Vehicle{
    public:
    int ownership_cost;
    int warranty, seating_capactiy;
    string fuel_type;  
};

class bikeinfo:public Vehicle{
    public:
    int cylinders, gears,   fuel_tank;
    string cooling_type;
    string wheel_type;
};

class Audi:public carinfo{
    public:
    void getcardata(){
        cout<<"Enter the Price"<<endl;
        cin>>price;
        cout<<"Enter the milage"<<endl;
        cin>>milage;
        cout<<"Enter the ownershi-cost"<<endl;
        cin>>ownership_cost;
        cout<<"enter the warrnaty"<<endl;
        cin>>warranty;
        cout<<"enter the seating capacity"<<endl;
        cin>>seating_capactiy;
        cout<<"enter the fuel type"<<endl;
        cin>>fuel_type;
    }
};

class Bajaj: public bikeinfo{
    public:
    void getbikedata(){
        cout<<"Enter the Price"<<endl;
        cin>>price;
        cout<<"Enter the milage"<<endl;
        cin>>milage;
        cout<<"enter the no of cylinders"<<endl;
        cin>>cylinders;
        cout<<"enter the no of grears "<<endl;
        cin>>gears;
        cout<<"enter the fuel tank capacity"<<endl;
        cin>>fuel_tank;
        cout<<"enter the cooling "<<endl;
        cin>>cooling_type;

    }

    void showbikedata(){
        cout<<"price-"<<price<<endl;
        cout<<"milage-"<<milage<<endl;
        cout<<"cylinders-"<<cylinders<<endl;
        cout<<"gears-"<<gears<<endl;
        cout<<"fuel_tank-"<<fuel_tank<<endl;
        cout<<"cooling_type"<<cooling_type<<endl;
    }
};

int main(){
    Bajaj pulser;
    pulser.getbikedata();
return 0;
}