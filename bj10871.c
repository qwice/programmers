#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;
    int *k;
    scanf("%d", &a);
    scanf("%d", &b);
    k = (int *)malloc(sizeof(int) * a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &k[i]);
    }
    i = 0;
    while (i < a)
    {
        if (k[i] < b)
        {
            printf("%d ", k[i]);
        }
        i++;
    }
    free(k);
}