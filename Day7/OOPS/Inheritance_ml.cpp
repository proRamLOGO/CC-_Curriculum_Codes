#include<iostream>

using namespace std;
class car{

private:
    long int rcno = 3245345 ;

public:
    int mileage,engine;
    string name,brand;
    int rcn1 = rcno ;
};

class SUV: public car {
public:

    int type;
    SUV(){
        cin>>type;
        cout<<endl<<"SUV is made!!"<<endl;
    }

};
class SUV2: public SUV {
public:

    int no_of_seats;
    SUV2(){
        cin>>no_of_seats;
        cout<<endl<<"SUV2 is made!!"<<endl;
    }

};


int main()
{
    SUV2 Creta;

    cout << "\nRC NO. of suv2 " << Creta.rcn1 ;
    cout << "\nType of suv2 " << Creta.type ;
    cout << "\nSeats of suv2 " << Creta.no_of_seats ;

}