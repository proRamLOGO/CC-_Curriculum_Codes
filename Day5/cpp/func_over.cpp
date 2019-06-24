#include <iostream>

using namespace std ;

int add( int x, int y ) {
    return x+y ;
}
int add( int x, int y, int z ) {
    return x+y+z ;
}

char add( int x, int y ) {
    return x+y ;
}


int main() {

    int n1, n2, n3 ;
    cin >> n1 >> n2 >> n3 ;
    cout << add(n1, n3) << endl << add(n2, n3, n1)  << add( n1,n2) ;
}