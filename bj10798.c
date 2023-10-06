#include <stdio.h>

int main()
{
    char a[5][16];

    for (int k = 0; k < 5; k++)
    {
        for (int l = 0; l < 16; l++)
        {
            if (l != 15)
                a[k][l] = ' ';
            else
                a[k][15] = NULL;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", a[i]);
    }

    for (int k = 0; k < 16; k++)
    {
        for (int l = 0; l < 5; l++)
        {
            if (a[l][k] != ' ' && a[l][k] != 0) // a[l][k] != 0 이거 추가 안해서 틀림
                printf("%c", a[l][k]);
            else if (a[l][k] == ' ')
                continue;
        }
    }
}