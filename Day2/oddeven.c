#include <stdio.h>

int main() {

    int x ;

    scanf("%d",&x) ;

    ///App1 - normal if else
     
    if ( x%2==1 ) { 
        printf("odd") ;
    }    
    else {
        printf("even") ;
    }


    ///App 4 - ternary operator
    ///( x%2 )? printf("odd") : printf("even") ;



    ///App2 
    
    if ( x%2 ) { 
        printf("odd") ;
    }    
    else {
        printf("even") ;
    }
    

    ///App3
    
    if ( !(x%2) ) { 
        printf("a") ;
    }    
    else {
        printf("b") ;
    }
    
}