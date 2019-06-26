#include<iostream>

using namespace std;

class human {

public: 

    human() {
        int no_of_legs, no_of_heads ;
        cin >> no_of_legs >> no_of_heads ;
        cout << "Human is born\n" ;
    }
    void walk() {
        cout << "1212121212...\n" ; 
    }


};

class indian {

public:
    string zone ;
    indian() {
        cin >> zone ;
        cout << "Hey " << zone << "Indian\n" ;
    }
    void eat() {
        cout << "anfnfnndvsdv\n" ;
    }
    void walk() {
        cout << "456...\n" ; 
    }



};

class vegitarian {

public:

    string fav_dish ;
    vegitarian() {
        cin >> fav_dish ;
        cout << "I too like " << fav_dish << endl ;
    }
    void select() {
        cin >> fav_dish ;
    }

};
class doctor: public human, public indian, public vegitarian {

public:

    int stethescopes ;
    doctor() {
        cin >> stethescopes ;
        cout << "Doc ban gaye aap" ;
    }
    //void walk() {
      //  cout << "234235r23r\n" ;
    //}


};

int main()
{
    doctor prashant_kumar_jaiswal ;
    cout << endl << endl << endl << endl << endl  ;
    cout << "Doc has " << prashant_kumar_jaiswal.stethescopes << " Stehtescoes\n"; 
    cout << "Doc's fav dish is " << prashant_kumar_jaiswal.fav_dish << "\n"; 
    cout << "Doc is a " << prashant_kumar_jaiswal.zone << " Indian \n" ;
    
    prashant_kumar_jaiswal.walk() ;
    

}