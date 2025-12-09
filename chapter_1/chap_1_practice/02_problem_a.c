/*
2.Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
a.area of a circle
*/
#include <stdio.h>

int main()
 {
    int r=6;
    float a=3.14*r*r; // if we are not write this 
    printf("The area of circle with radius %d is %f cm. ", r, a ); //%d= r and %f=a
  //printf("The area of circle with radius %d is %f cm. ", r, 3.14*r*r ); %f=3.14*r*r

    return 0;
}