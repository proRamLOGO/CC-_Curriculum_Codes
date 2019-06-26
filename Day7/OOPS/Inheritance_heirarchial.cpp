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

    int no_of_seats;
    SUV(){
        cin>>no_of_seats;
        cout<<endl<<"SUV is made!!"<<endl;
    }

};
class HB: public car {
public:

    int boot_space;
    HB(){
        cin>>boot_space;
        cout<<endl<<"Hatchback car is made!!"<<endl;
    }

};
class Sedan: public car {
public:

    int cc;
    Sedan(){
        cin >> cc;
        cout<<endl<<"Sedan is made!!"<<endl;
    }

};

int main()
{
    SUV Brezza;
    Sedan Altis ;
    HB i10 ;
    cout << "RC NO. of Brezza " << Brezza.rcn1 ;
    cout << "\nRC NO. of Altis " << Altis.rcn1 ;
    cout << "\nRC NO. of i10 " << i10.rcn1 ;

    Brezza.rcn1 = 124 ;
    i10.rcn1 = 1231 ;
    Altis.rcn1 = 63 ;

    cout << "\nRC NO. of Brezza " << Brezza.rcn1 ;
    cout << "\nRC NO. of Altis " << Altis.rcn1 ;
    cout << "\nRC NO. of i10 " << i10.rcn1 ;
    cout << "\nSeats of Brezza " << Brezza.no_of_seats ;
    cout << "\nCC NO. of Altis " << Altis.cc ;
    cout << "\nBS NO. of i10 " << i10.boot_space ;

}