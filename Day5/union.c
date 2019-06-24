#include <stdio.h>

union student{

    int class, by ;
    char name[100] ;

};

struct student1{

    int class, by ;
    char name[100] ;

};


void main() {

    union student s ;
    struct student1 s1 ;
    printf("%d",sizeof(s) ) ;
    printf("\n%d",sizeof(s1) ) ;

    
}