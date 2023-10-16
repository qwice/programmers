#include <stdio.h>

int main()
{
    int N, K, count = 0;

    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
            if (count == K)
            {
                printf("%d", i);
                break;
            }
        }
    }
    if (count < K)
        printf("0");
}