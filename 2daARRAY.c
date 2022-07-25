#include <stdio.h>

int main()
{
    int n = 2;
    int m = 2;
    int lavda[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter no.:");
            scanf("%d", &lavda);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", lavda[0][0]);
            printf(" %d \n", lavda[0][1]);
            printf(" %d ", lavda[1][0]);
            printf(" %d \n", lavda[1][1]);
        }
    }

    return 0;
}
