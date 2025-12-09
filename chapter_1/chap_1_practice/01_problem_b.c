/*
1.Write a C program to calculate area of a rectangle:
b.Using inputs supplied by the user.
*/
#include <stdio.h>

int main()
 {
    int l , b ;
    printf("Enter l\n");
    scanf("%d", &l);

    printf("Enter b\n");
    scanf("%d", &b);

    printf("The area of the rectangle is %d", l*b);

    return 0;
}