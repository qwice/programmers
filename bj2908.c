#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d", &a, &b);

    for (c = 0; a != 0;)
    {
        c = c * 10 + a % 10;
        a = a / 10;
    }
    for (d = 0; b != 0;)
    {
        d = d * 10 + b % 10;
        b = b / 10;
    }
    if (c > d)
        printf("%d", c);
    else
        printf("%d", d);
}