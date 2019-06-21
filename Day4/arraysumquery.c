#include <stdio.h>

int main() {
    
    int n, sum=0 ;
    scanf("%d", &n) ;

    int arr[n] ;

    for ( int i = 0 ; i < n ; ) {
        scanf("%d", &arr[i]) ;
        sum += arr[i++] ;
    }

    int q ;
    scanf("%d", &q) ;

    for ( int i = 0 ; i < q ; ++i ) {
        int val ;
        scanf("%d", &val) ;

        int sum = 0 ;
        for ( int j = 0 ; j < val ; ++j ) 
            sum += arr[j] ;
        
        printf("\n%d is sum of first %d terms", sum, val );


    }

}