#include <stdio.h>

int main()
 {
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if(age>10)
    {

        printf("Your age is greater then 10");
    }
    else
    {
        printf("Your age is not greater then 10");
    }

    return 0;
}