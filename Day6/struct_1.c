#include <stdio.h>

struct student{

    int class, by ;
    char name[100] ;

};


void main() {

    int a = 8, b = 12 ;
    printf("%d\n",a&b) ;
    printf("%d\n",a|b) ;
    printf("%d\n",a^b) ;

}