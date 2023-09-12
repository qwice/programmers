#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char *p;
    int count = 0;

    scanf("%d", &a);
    p = (char *)malloc(sizeof(char) * (a + 1));
    scanf("%s", p);
    for (int i = 0; i < a; i++)
    {
        count += p[i] - '0';
    }
    printf("%d", count);
    free(p);
}