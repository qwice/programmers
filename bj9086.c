#include <stdio.h>

int main()
{
    int a, i, j;
    char b[1000];

    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%s", b);
        printf("%c", b[0]);
        for (j = 0; b[j] != 0; j++)
        {
            if (b[j + 1] == 0)
                printf("%c", b[j]);
        }
        if (i != a - 1)
            printf("\n");
    }
}