#include <stdio.h>

void main() {
    
    int n ;
    scanf("%d",&n) ;

    int *arr ;
    arr = (int*)calloc( n , sizeof(int) ) ;

    for ( auto i = 0 ; i < n ; ++i ) 
        scanf("%d",&arr[i]) ;
    printf("\n") ;
    for ( auto i = 0 ; i < n ; ++i ) 
        printf("%d ",arr[i]) ;
    
    free(arr) ;

    printf("\n\n%d\n\n",arr[3]) ;

}