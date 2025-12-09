//4. Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.

#include <stdio.h>

int main()
 {
    int p ;
    printf("Enter the vale of principal: ");
    scanf("%d", &p);
    
    float t , r ;
    printf("Enter the vale of time: ");
    scanf("%f", &t);

    printf("Enter the vale of rate of interest: ");
    scanf("%f", &r);

    printf("The simple interest is %f " , (p*r*t)/100 );

    return 0;
}