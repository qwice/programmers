#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int count = 0;
    int a[42];

    for (i = 0; i < 42; i++)
    {
        a[i] = 0;
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &j);
        a[j % 42] = 1;
    }
    for (i = 0; i < 42; i++)
    {
        if (a[i] == 1)
            count++;
    }
    printf("%d", count);
}