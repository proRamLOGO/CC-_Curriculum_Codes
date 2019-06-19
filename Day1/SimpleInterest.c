#include<stdio.h>
int main()
 {
    int p, r, t;
    float si;
    printf("\n p,r,t ");
    scanf("%d %d %d", &p, &r, &t);
    si = (p*r*t)/100.0;
    printf("Sum : %f", si);
    return(0);
 }
