#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count, num;
    int a = 0;
    int *n;
    int i;

    scanf("%d", &count);
    n = (int *)malloc(sizeof(int) * count);
    for (i = 0; i < count; i++)
    {
        scanf("%d", &n[i]);
    }
    scanf("%d", &num);
    for (i = 0; i < count; i++)
    {
        if (n[i] == num)
            a++;
    }
    free(n);
    printf("\n%d", a);
}