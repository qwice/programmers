#include <stdio.h>

int main()
{
    int k[9];
    int i, y, count;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &k[i]);
    }
    i = 0;
    while (i < 9)
    {
        y = 0;
        count = 0;
        while (y < 9)
        {
            if (k[i] < k[y])
            {
                count++;
            }
            y++;
        }
        if (count == 0)
        {
            printf("%d\n", k[i]);
            printf("%d", i + 1);
            return 0;
        }
        i++;
    }
}