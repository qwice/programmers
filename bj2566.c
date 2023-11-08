#include <stdio.h>

int main()
{
    int a[9][9];
    int max = 0;
    int i, j, x, y;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (a[i][j] >= max) // 같다 빼먹어서 4번 틀림
            {
                max = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", x, y);
}