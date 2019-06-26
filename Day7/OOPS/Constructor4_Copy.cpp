#include<iostream>

using namespace std;

class Car {

public:
    int mileage ;
    string name, brand, type ;
    // Constructor1
    Car( ) {

        mileage = 123 ;
        name = "Hector" ;
        brand = "MG" ;
        type = "SUV" ;

    }
    // Copy onstructor
    Car( Car& c ) {

        mileage = c.mileage ;
        name = c.name ;
        brand = c.brand ;
        type =  c.type ;

    }

    void start() {
        cout << "\n\nGrrrhhhhh.....\nGrrrhhhhh....\nGrrrhhhhh..\n\n" ;
    }

} ;

int main() {

    Car hector ;     
    cout << endl << "Mileage :     " << hector.mileage ;
    cout << endl << "Name :     " << hector.name ;
    cout << endl << "Brand :     " << hector.brand ;
    cout << endl << "Type :     " << hector.type ;

    //Car creta( hector ) ;
    Car creta = hector  ;

    cout << endl << "Mileage :     " << creta.mileage ;
    cout << endl << "Name :     " << creta.name ;
    cout << endl << "Brand :     " << creta.brand ;
    cout << endl << "Type :     " << creta.type ;

    hector.name = "MG Hector" ;
    creta.name = "Creta" ;

    cout << endl << "Hec Name :     " << hector.name ;
    cout << endl << "Cre Name :     " << creta.name ;


}