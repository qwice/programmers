#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;
    int max = 0;
    float cal = 0;
    int *p;

    scanf("%d", &a);
    p = (int *)malloc(sizeof(int) * a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &p[i]);
    }
    for (i = 0; i < a; i++)
    {
        if (max < p[i])
            max = p[i];
    }
    for (i = 0; i < a; i++)
    {
        cal = cal + (float)p[i] * 100 / max;
    }
    printf("%f", cal / a);
    free(p);
}