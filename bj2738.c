#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    int *p;

    scanf("%d %d", &a, &b);
    p = (int *)malloc(sizeof(int) * a * b);
    d=0;
    for (int j = 0; j < a; j++)
    {
        for (int k = 0; k < b; k++)
        {
            p[d] = 0;
            d++;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        d = 0;
        for (int j = 0; j < a; j++)
        {
            for (int k = 0; k < b; k++)
            {
                scanf("%d", &c);
                *(p + d) += c;
                d++;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d", *p);
            if (j != b - 1)
                printf(" ");
            p++;
        }
        printf("\n");
    }
}