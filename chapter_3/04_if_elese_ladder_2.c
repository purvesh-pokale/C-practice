#include <stdio.h>

int main()
 {
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if(age>60)
    {

        printf("You can drive and your senior citizen");
    }
    else if (age>=30)
    {
        printf("You can drive and your are elder");
    }
    else if (age>=20 && age<=29)
    {
        printf("You can drive and your are in a 20es");
    }
    else if (age>18)
    {
        printf("You can drive ");
    }
    else 
    {
        printf("You cannot drive");
    }

    return 0;
}