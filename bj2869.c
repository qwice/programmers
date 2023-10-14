#include <stdio.h>

int main()
{
    int a, b, c, i;
    int count = 0;

    scanf("%d %d %d", &a, &b, &c);
    i = (c - b - 1) / (a - b) + 1; // 몰라서 검색,,
    printf("%d", i);
}