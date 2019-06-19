#include <stdio.h>

int main() {

    // input 2 nos and perform 5 arithmetic operations on it;

    int n1, n2 ;
    scanf("%d%d", &n1, &n2 ) ;

    printf( "Sum is %d\n", n1+n2 ) ;
    printf( "Diff is %d\n", n1-n2 ) ;
    printf( "Product is %d\n", n1*n2 ) ;
    printf( "Remainder is %d\n", n1%n2 ) ;

    // if we want quotient to give int values only then
    printf( "Quotient1 is %d\n", n1/n2 ) ;

    // if we want quotient to give float values only then
    printf( "Quotient2 is %f\n", n1/n2 ) ;

    // but above line will not give desired ans so we use TYPE CASTING here.
    printf( "Quotient3 is %f\n", (float)(n1/n2) ) ;

    // again above line will not give desired input becuase n1/n2 gets executed first and then it gets cinverted to float so we do this.
    printf( "Quotient4 is %f\n", (float)n1/n2 ) ;
    //here n1 gets converted to float first and then it is divided by n2
    

    
    

}
