#include <stdio.h>

int main() {

    int n ;
    scanf("%d", &n) ;

    int arr[n] ;

    for ( int i = 0 ; i < n ; ++i ) 
        scanf("%d", &arr[i]) ;

    for ( int  i = 0 ; i < n ; ++i ) 
        printf("\n%d : %d ",i+1, arr[i]) ;

}