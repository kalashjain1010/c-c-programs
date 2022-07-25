// with marks greater than 33 in each subject and total % more then 40
#include <stdio.h>

int main()
{
    int phy, maths, che;
    float total;
    printf("enter physics marks\n");
    scanf("%d", &phy);

    printf("enter maths marks\n");
    scanf("%d", &maths);

    printf("enter chemistry marks\n");
    scanf("%d", &che);

    total = (phy + maths + che) / 3;
    if ((total < 40) || phy < 33 || che < 33 || maths < 33)
    {
        printf("you failed \n by %f", total);
    }
    else
    {
        printf("you passed \n by %f", total);
    }

    return 0;
}