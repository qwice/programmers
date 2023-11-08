#include <stdio.h>

int ab(int a, int b)
{
    if (a >= b)
        return a - b;
    else
        return b - a;
}

int main()
{
    int a, b, count;
    char s[100];

    count = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%s", s);
        for (int j = 0; s[j] != 0; j++)
        {
            b = 0;
            for (int k = j; s[k] != 0; k++)
            {
                if (s[j] == s[k] && ab(j, k) > 1 && s[j] != s[k - 1])
                {
                    b = 1;
                    count++;
                    break;
                }
            }
            if (b == 1)
                break;
        }
    }
    printf("%d", a - count);
}