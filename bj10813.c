#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, M;
    int j, k, temp;
    int *p;

    p = (int *)malloc(sizeof(int) * N);
    scanf("%d %d", &N, &M);
    for (i = 1; i <= N; i++)
    {
        p[i - 1] = i;
    }
    for (i = 0; i < M; i++)
    {
        scanf("%d %d", &j, &k);
        temp = p[j - 1];
        p[j - 1] = p[k - 1];
        p[k - 1] = temp;
    }
    for (i = 0; i < N; i++)
    {
        printf("%d", p[i]);
        if (i < N - 1)
            printf(" ");
    }
    free(p);
}