#include <iostream>

using namespace std ;

unsigned long long int fact( int x ) {

    unsigned long long int res = 1 ;
    for ( int i = 0 ; i < x ; ++i )
        res *=  (i+1) ;
    return res ;

}

int main() {

    int n ;
    cin >> n ;
    cout << fact(n) ;

    int arr[n] ;
    
    for ( int i = 0 ; i < n ; ++i ) {
        cin >> arr[i] ;
        cout << fact(arr[i]) << endl ;
    }
 
}