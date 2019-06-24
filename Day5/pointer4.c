#include <stdio.h>

int sumup( int *arr, int n ) {

    int sum = 0 ;
    for ( int i = 0 ; i < n ; ++i ) 
        arr[i] += i ;
    return sum ;
}


int main() {

    int n ;
    scanf("%d",&n) ;
    int arr[n] ;
    
    printf("\n Sizes are  - %d \n", sizeof(arr)/sizeof((arr[0])) ) ;
    for ( int i = 0 ; i < n ; ++i ) 
        scanf("%d",&arr[i]) ;

    sumup( &arr, sizeof(arr)/sizeof((arr[0])) ) ;    

    for ( int i = 0 ; i < n ; ++i ) 
        printf("\n%d", arr[i]) ;

}