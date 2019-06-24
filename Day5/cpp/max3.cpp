#include <iostream>

using namespace std ;

int main() {

    int n1, n2, n3 ;
    cout << "pls enter 3 nos.\n" ;
    cin >> n1 >> n2 >> n3 ;

    if ( n1 > n2 && n1 > n3 ) 
        cout << "n1 is biggest " ; 
    else if ( n2 > n3  && n2 > n1)
        cout << "n2 is biggest " ;
    else 
        cout << "n3 is biggest " ;
    
}