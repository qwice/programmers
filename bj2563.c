#include <stdio.h>

int main()
{
    int a[100][100] = {
        0,
    };
    int b, c, d;
    int count = 0;

    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d %d", &c, &d);
        for (int j = d; j < d + 10; j++)
        {
            for (int k = c; k < c + 10; k++)
            {
                a[j][k] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if(a[i][j] == 1) count++;
        }
    }
    printf("%d", count);
}