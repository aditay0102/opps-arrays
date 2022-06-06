#include <iostream>
using namespace std;

class patient_details{
    private:
    string name;
    int age;
    string address;
    public:
    string n;
};

class doctor_details{
    private:
    string name;
    int exp;
    string special;
};

class ward_details{
    private:
    int wardno;
    string floor;
};

class amount_details{
    int medicines;
    int doctor_fee;
    int other;
};

class Hospital_details: public patient_details, public doctor_details, public ward_details, public amount_details{
    public:
    void details(){
        cout<<"Enter the patient details"<<endl;
        cin>>n;
        cout<<n;
    };
};

int main(){
    Hospital_details person;
    person.details();
return 0;
}