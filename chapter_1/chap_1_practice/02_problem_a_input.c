/*
2.Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
a.area of a circle by taking input
*/
#include <stdio.h>

int main()
 {
    int r;
    
    printf("enter the value of radius: ");
    scanf("%d", &r);
     
    printf("The area of circle is %f cm. ", 3.14*r*r );  //and %f=a
  

    return 0;
}