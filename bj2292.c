#include <stdio.h>

int main()
{
    int a, i;
    int k = 1;

    scanf("%d", &a);
    for (i = 0;; i++)
    {
        if (a == 1)
        {
            i = 0;
            break;
        }
        else
            k += 6 * i;
        if (k >= a)
            break;
    }
    printf("%d", i + 1);
}