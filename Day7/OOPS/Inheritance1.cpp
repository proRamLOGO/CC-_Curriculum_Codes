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

int main()
{
    SUV Brezza;
    SUV innova;

    cout << "\nseats in brezza" << Brezza.no_of_seats  ;
    cout << "\nseats in Innova" << innova.no_of_seats  ;
    cout << "\nRC No. of Breeza" << Brezza.rcn1 ;

}