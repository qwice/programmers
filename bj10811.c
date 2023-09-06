#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, t, n, m, num;
    int *p, *o;

    scanf("%d %d", &i, &j);
    p = (int *)malloc(sizeof(int) * i);
    o = (int *)malloc(sizeof(int) * i);
    for (k = 0; k < i; k++)
    {
        p[k] = k + 1;
    }
    for (k = 0; k < j; k++)
    {
        scanf("%d %d", &n, &m);
        for (t = 0; t < i; t++)
        {
            o[t] = p[t];
        }
        num = m - n;
        for (t = 0; t < num + 1; t++)
        {
            o[n - 1] = p[m - 1];
            m--;
            n++;
        }
        for (t = 0; t < i; t++)
        {
            p[t] = o[t];
        }
    }
    for (k = 0; k < i; k++)
    {
        printf("%d ", o[k]);
    }
    free(p);
    free(o);
}