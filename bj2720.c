#include <stdio.h>

int main()
{
    int a, b;
    int q = 25, d = 10, n = 5, p = 1;

    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        printf("%d ", b / q);
        printf("%d ", b % q / d);
        printf("%d ", b % q % d / n);
        printf("%d\n", b % q % d % n / p); // 개행 넣어줘야합니다.
    }
}