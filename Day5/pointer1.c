#include <stdio.h>

void swap( int *x, int *y ) {

    *x += *y ;
    *y = *x - *y ;
    *x -= *y ;

}

int main() {

    int x , y ;
    scanf("%d%d",&x,&y) ;
    swap(&x,&y) ;
    printf("\n%d %d\n",x,y) ;
    printf("\n%x %X",&x,&y) ;


}