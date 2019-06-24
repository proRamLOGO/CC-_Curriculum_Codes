#include <stdio.h>

struct student{

    int class, by ;
    char name[100] ;

};


void main() {

    int n ;
    scanf("%d",&n) ;
    struct student s[n] ;
    
    for ( int i = 0 ; i < n ; ++i ) {

        printf("\n\nEnter name of %dth student:         ",i+1) ;
        scanf("%s",&s[i].name) ;
        printf("\nEnter class of %dth student:         ",i+1) ;
        scanf("%d",&((s[i]).class)) ;
        printf("\nEnter Birt Year of %dth student:         ",i+1) ;
        scanf("%d",&((s[i]).by)) ;

    }

    for ( int i = 0 ; i < n ; ++i ) {
        printf("\n\nName of %dth student is       %s",i+1,(s[i]).name ) ;
        printf("\nBirth Year of %dth student is %d",i+1,(s[i]).by ) ;
        printf("\nClass of %dth student is      %d",i+1,(s[i]).class ) ;
    }
}