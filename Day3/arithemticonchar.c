#include <stdio.h>

int main() {

    char x ;
    scanf("%c",&x) ;
    printf("%d",x-'a') ;
    printf("\n%c\n\n",x-'a') ;
    /* 
    int sum = x + 2 + 'd' ;
    printf("char given     :     %c", x) ;
    printf("\nascii of char given :   %d", x) ;
    printf("\n%c",sum) ;
    printf("\n%d",sum) ;
    */

    printf("%c%c%d",'a'+2,'g','A') ;


    return 0 ;
    

}