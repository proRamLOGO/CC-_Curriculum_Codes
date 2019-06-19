#include <stdio.h>
#include <math.h>

int main() {

    int n1, n2 ;
    scanf("%d%d",&n1,&n2) ;
    
    ///using if else
    if ( n1 > n2 ) {
        printf("a i.e. %d is bigger",n1) ;
    }
    else if(n1==n2) {
        printf("a and b are same i.e. %d",n2) ;
    }
    else if(n1<n2){
            printf("b i.e. %d is bigger",n2);
    }
    
    
    /// Using ternary operator. 
    /// Limitation can only judge 2 situations out of 3
    
    int res = ( n1 > n2 ) ? n1 : n2 ;
    printf("%d is bigger",res);
    

}