#include <stdio.h>

int main()
 {
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if(age>60)
    {

        printf("You cna drive and your senior citizen");
    }
    else if (age>40)
    {
        printf("You cna drive and your are elder");
    }
    else if (age>20)
    {
        printf("You cna drive and your are in a 20es");
    }
    else if (age>18)
    {
        printf("You cna drive ");
    }
    else 
    {
        printf("You cannot drive");
    }

    return 0;
}