#include <stdio.h>

int sumup(  ) {

    int sum = 0 ;
    //for ( int i = 0 ; i < n ; ++i ) 
     //   sum += arr[i] ;
    return sum ;
}


int main() {

    int n ;
    scanf("%d",&n) ;

    int arr[n] ;

    for ( int i = 0 ; i < n ; ++i ) 
        scanf("%d",&arr[i]) ;

    for ( int i = 0 ; i < n ; ++i ) 
        printf("\n%d %d",*(arr+3), arr[3])  ;

   // printf("%d",sumup(  )) ;    

}