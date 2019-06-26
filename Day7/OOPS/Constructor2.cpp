#include<iostream>

using namespace std;

class Car {

public:
    int mileage ;
    string name, brand, type ;

    // Constructor
    Car() {

        int mile ;
        string nm, brd, tp ;
        cin >> mile >> nm >> brd >> tp ;
        mileage = mile ;
        name = nm ;
        brand = brd ;
        type = tp ;

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

    hector.start() ;

}