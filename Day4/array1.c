#include <stdio.h>

int main() {

    int n ;
    scanf("%d", &n) ;

    int arr[10] ;
    ///exp1 printf 
    for ( int i = 0 ; i < 10 ; ++i ) {
        //int x ;
        scanf("%d",&arr[i]) ;
        //arr[i] = x ;
    }

    for ( int i = 0 ; i < 10 ; ++i ) {
        //int x = arr[i] ;
        printf("\n%dth element is %d ",i+1, arr[i]) ;
    }


}