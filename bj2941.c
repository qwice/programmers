#include <stdio.h>

int main()
{
    char s[100];
    int count = 0;

    scanf("%s", s);
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-'))
        {
            i++;
            count++;
        }
        else if (s[i] == 'd' && s[i + 1] == '-')
        {
            i++;
            count++;
        }
        else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
        {
            i = i + 2;
            count++;
        }
        else if (s[i] == 'l' && s[i + 1] == 'j')
        {
            i++;
            count++;
        }
        else if (s[i] == 'n' && s[i + 1] == 'j')
        {
            i++;
            count++;
        }
        else if (s[i] == 's' && s[i + 1] == '=')
        {
            i++;
            count++;
        }
        else if (s[i] == 'z' && s[i + 1] == '=')
        {
            i++;
            count++;
        }
        else
            count++;
    }
    printf("%d", count);
}