#include <stdio.h>

int main()
{
    int a, i, k, j;
    int sum = 0;

    scanf("%d", &a);
    for (i = 1;; i++)
    {
        if (sum >= a)
            break;
        else
            sum += i;
    }
    if (sum == 1)
        printf("%d/%d", 1, 1);
    else if (i % 2 == 0)
    {
        k = sum - a + 1;
        j = i - k;
        printf("%d/%d", k, j);
    }
    else if (i % 2 == 1)
    {
        j = sum - a + 1;
        k = i - j;
        printf("%d/%d", k, j);
    }
}