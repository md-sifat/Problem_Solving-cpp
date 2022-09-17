#include <stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d", &n);

    for (int i = 1; i < (n / 2) + 1; i++)
    {
        for (int k = i; k <= (n / 2); k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        for (int l = (2 * i); l <= n; l++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = (n / 2) + 1; i >= 1; i--)
    {
        for (int k = i; k <= (n / 2); k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        for (int l = (2 * i); l <= n; l++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}