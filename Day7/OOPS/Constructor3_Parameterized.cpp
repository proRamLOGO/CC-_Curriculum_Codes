#include<iostream>

using namespace std;

class Car {

public:
    int mileage ;
    string name, brand, type ;

    // Constructor
    Car( int m, string n, string b, string t ) {

        mileage = m ;
        name = n ;
        brand = b ;
        type = t ;

    }

    void start() {
        cout << "\n\nGrrrhhhhh.....\nGrrrhhhhh....\nGrrrhhhhh..\n\n" ;
    }

} ;

int main() {

    Car hector( 17, "Hector", "MG", "SUV" ) ; 
    
    cout << endl << "Mileage :     " << hector.mileage ;
    cout << endl << "Name :     " << hector.name ;
    cout << endl << "Brand :     " << hector.brand ;
    cout << endl << "Type :     " << hector.type ;

    hector.start() ;

}