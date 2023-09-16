#include <stdio.h>

int main()
{
    char s[20];
    int a, b;

    scanf("%d", &b);
    for (int k = 0; k < b; k++)
    {
        scanf("%d %s", &a, s);
        for (int i = 0; s[i] != 0; i++)
        {
            for (int j = 0; j < a; j++)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}