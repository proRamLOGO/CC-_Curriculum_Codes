#include<iostream>

using namespace std;

class Car {

public:
    int mileage ;
    string name, brand, type ;

    void start() {
        cout << "\n\nGrrrhhhhh.....\nGrrrhhhhh....\nGrrrhhhhh..\n\n" ;
    }

} ;

int main() {

    Car hector ; 
    hector.start() ;

}