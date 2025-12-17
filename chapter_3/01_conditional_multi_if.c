#include <stdio.h>

int main()
 {
    int age = 18;


    if(age>10)  //here only if your age is grater than 10 than only inside curly bracket will run
    {
        printf("Your age is greater then 10\n");
    }

    if(age%5==0)  
    {
        printf("Your age is divisible by 50\n");
    }

     if(age%5!=0)  
    {
        printf("Your age is not divisible by 50");
    }
    return 0;
}