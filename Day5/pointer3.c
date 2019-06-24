#include <stdio.h>

int sumup( int *arr ) {

    int sum = 0 ;
    for ( int i = 0 ; i < 10 ; ++i ) 
        sum += arr[i] ;
    return sum ;
}


int main() {

    int n ;
    scanf("%d",&n) ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; ++i ) 
        scanf("%d",&arr[i]) ;

    printf("\n%d",sumup( &arr )) ;    

}