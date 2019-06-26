#include <stdio.h>

void main() {

    int a = 8, b = 19 ;
    printf("%o\n",a&b) ;
    printf("%x\n",(a|b)) ;
    printf("%d\n",a^b) ;

    int c = a >> 2 ;
    int d = a << 2 ;
    
    printf("\n %d       %d",c,d) ;


}