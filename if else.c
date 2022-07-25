#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if ((age >= 18 && age <= 65) || age == 16)
    {
        printf("you can drive");
    }
    else
    {
        printf("you cant drive");
    }

    return 0;
}