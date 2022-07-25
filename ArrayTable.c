#include <stdio.h>

int main()
{
    int n;
    int array[10];
    printf("table of:\n");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        array[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {

        printf("%d X %d = %d\n", n, i + 1, array[i]);
    }

    return 0;
}