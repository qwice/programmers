#include <stdio.h>

int main()
{
    int a = -1;
    char s[100];
    char check = 'a';

    scanf("%s", s);
    for (int i = 0; check <= 'z'; i++)
    {
        a = -1;
        for (int j = 0; s[j] != 0; j++)
        {
            if (s[j] == check)
            {
                a = j;
                break;
            }
        }
        printf("%d ", a);
        check++;
    }
}