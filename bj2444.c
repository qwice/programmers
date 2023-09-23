#include <stdio.h>

int ab(int o)
{
    if (o > 0)
        return o;
    else
        return -o;
}

int abs(int k, int p)
{
    if (k > p)
        return k - p;
    else
        return p - k;
}

int main()
{
    int a;

    scanf("%d", &a);
    for (int i = 0; i < 2 * a - 1; i++)
    {
        for (int j = 0; j < abs(a, i + 1); j++)
        {
            printf(" ");
        }
        if (i < a)
        {
            for (int l = 0; l < 2 * i + 1; l++)
            {
                printf("*");
            }
        }
        else
        {
            for (int t = 0; t < 2 * (2 * a - 1 - i) - 1; t++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}