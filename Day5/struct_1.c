#include <stdio.h>

struct student{

    int class, by ;
    char name[100] ;

};


void main() {

    struct student s ;
    scanf("%s",&s.name) ;
    scanf("%d",&s.by) ;
    scanf("%d",&s.class) ;
    printf("\n%s",s.name) ;
    printf("\n%d",s.by) ;
    printf("\n%d",s.class) ;


}