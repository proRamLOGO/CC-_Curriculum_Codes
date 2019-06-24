#include <stdio.h>
#include <math.h>


_Bool primeChk( int *num ) {
    
    *num = *num + 2 ;
    return 1 ;
}


int main() {

    int num=2 ;
    int *ad ;
    ad = &num ;
    *ad += 2 ;
    printf("%d\n",*ad) ;
    scanf("%d", &num) ;
    primeChk(&num) ;
    printf("%d",num) ;
    



    
}