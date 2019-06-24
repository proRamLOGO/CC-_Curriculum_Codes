#include <iostream>

using namespace std ;

struct student{

    int clas, by ;
    char name[100] ;
    string name1 ;

};


int main() {

    student s ;
    cin >> s.name1 >> s.clas ;
    cout << endl << s.name1 << endl << s.clas ;
 
}