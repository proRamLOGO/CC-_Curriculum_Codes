#include <stdio.h>

void main() {

    int* arr[10] ;
    int a[10] ;

    for ( int i = 0 ; i < 10 ; ++i )
        a[i] = i+1 ;
    for ( int i = 0 ; i < 10 ; ++i ) 
        arr[i] = &(a[i]) ;
        
    for ( int i = 0 ; i < 10 ; ++i ) 
        printf("\n%d",*(arr[i]) ) ;
        
    
}