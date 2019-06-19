#include <stdio.h>
#include <math.h>

int main() {

	int a, b, c, d;
	float r1, r2 ;
	printf("Pls enter a, b, c") ;
	scanf("%d%d%d",&a,&b,&c) ;

	d = b*b - a*4*c ;
	
	/// Using nested if else
	if ( d >= 0 ) {
		if ( d > 0) {
			r1 = (-b + sqrt(d) ) / 2*a ;
			r2 = (-b - sqrt(d) ) / 2*a ;	
			printf("Roots are %f and %f", r1, r2 ) ;
	}                                                       
		else if ( d == 0 ) {
			r1 = -b/(2*a) ;
			printf("Roots are real and same and is %f", r1 ) ;
		}
	}
	else  {
		printf("Roots are imaginary" ) ;
	}

	/// Using if ... else if... else - Total 1 different logical if block/entity
	if ( d > 0) {
			r1 = (-b + sqrt(d) ) / 2*a ;
			r2 = (-b - sqrt(d) ) / 2*a ;	
			printf("Roots are %f and %f", r1, r2 ) ;
	}                                                       
	else if ( d == 0 ) {
			r1 = -b/(2*a) ;
			printf("Roots are real and same and is %f", r1 ) ;
	}
	else {
		printf("Roots are imaginary" ) ;
	}

	/// Using ifs only - Total 3 different logical if blocks/entities
	
	if ( d > 0) {
			r1 = (-b + sqrt(d) ) / 2*a ;
			r2 = (-b - sqrt(d) ) / 2*a ;	
			printf("Roots are %f and %f", r1, r2 ) ;
	}                                                       
	if ( d == 0 ) {
			r1 = -b/(2*a) ;
			printf("Roots are real and same and is %f", r1 ) ;
	}
	if ( d < 0 ) {
		printf("Roots are imaginary" ) ;
	}



}