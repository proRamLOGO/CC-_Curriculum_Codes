#include <stdio.h>

void main() {
    
    
    int sum=0, i=0, n ;

    HERE:
    printf(" here ! \n") ;
    scanf("%d",&n) ;
    sum += n ;
    i++ ;
    if ( i!=5 )
    goto HERE ;

    printf("\n%d\n",sum) ;

}