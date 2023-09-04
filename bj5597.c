#include <stdio.h>

int main()
{
    int a[30];
    int i, j;

    for (i = 0; i < 30; i++)
    {
        a[i] = 0;
    }
    for (i = 0; i < 28; i++)
    {
        scanf("%d", &j);
        a[j - 1] = j;
    }
    for (i = 1; i <= 30; i++)
    {
        if (a[i - 1] == 0)
            printf("%d\n", i);
    }
}