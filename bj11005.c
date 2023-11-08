#include <stdio.h>

void change(int a, int b)
{
    char k;
    int p;

    p = a;
    a = a / b;
    if (a != 0)
        change(a, b);
    k = p % b;
    if (k >= 10)
        printf("%c", k + 'A' - 10, k);
    else
        printf("%c", k + '0', k);
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    change(a, b);
}