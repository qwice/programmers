#include <stdio.h>

int main()
{
    int M, N, count, fir, cnt = 0, sum = 0;

    scanf("%d %d", &M, &N);
    for (int i = N; i >= M; i--)
    {
        count = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 1)
        {
            sum += i;
            cnt++;
            fir = i;
        }
    }
    if (cnt == 0)
        printf("-1");
    else
    {
        printf("%d\n", sum);
        printf("%d", fir);
    }
}