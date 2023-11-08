#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, t, N, M;
    int y, j, k;
    int *p;

    scanf("%d %d", &N, &M);
    p = (int *)malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
    {
        p[i] = 0;
    }
    for (i = 0; i < M; i++)
    {
        scanf("%d %d %d", &y, &j, &k);
        for (t = y - 1; t < j; t++)
        {
            p[t] = k;
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d", p[i]);
        if (i < N - 1)
            printf(" ");
    }
    free(p);
}