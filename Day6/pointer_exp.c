#include <stdio.h>

void main() {
    int a=5 ;
    int **e ;
    int *y = &a ;
    e = &y ;

    printf("\nadd of e %X ",&e) ;
    printf("\nval e points to1 %X ",*e) ;
    printf("\nval e points to2 %d ",**e) ;
    printf("\nadd of y %X ",&y) ;
    printf("\nval y points to %d ",*y) ;
    printf("\nval in y %X ",y) ;
    printf("\nadd of a %X ",&a) ;
    printf("\nval of a %d ",a) ;


}