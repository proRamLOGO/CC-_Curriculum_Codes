#include <stdio.h>

int main() {
    
    int n, sum=0 ;
    scanf("%d", &n) ;

    int arr[n] ;

    for ( int i = 0 ; i < n ; ) {
        scanf("%d", &arr[i]) ;
        sum += arr[i++] ;
    }

    for ( int  i = 0 ; i < n ; ++i ) 
        printf("\n%d : %d ",i+1, arr[i]) ;
        
    printf("\nSum is %d ", sum) ;
}