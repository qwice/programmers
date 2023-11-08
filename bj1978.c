#include <stdio.h>

int main()
{
    int a, b, count, cnt = 0;

    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        count = 0;
        for (int j = 1; j < b; j++)
        {
            if (b % j == 0)
                count++;
        }
        if (count == 1)
            cnt++;
    }
    printf("%d", cnt);
}