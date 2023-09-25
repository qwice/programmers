#include <stdio.h>

int main()
{
    char s[1000000];
    int a[26];
    int m;
    int count = 0;
    int max = 0;
    int k = 0;
    for (int i = 0; i < 26; i++)
    {
        a[i] = 0;
    }
    scanf("%s", s);
    for (int j = 0; s[j] != 0; j++)
    {
        if (s[j] >= 65 && s[j] <= 90)
        {
            k = s[j] - 65;
            a[k]++;
        }
        else
        {
            k = s[j] - 97;
            a[k]++;
        }
    }
    for (int l = 0; l < 26; l++)
    {
        if (a[l] > max)
        {
            max = a[l];
            m = l;
        }
    }
    for (int p = 0; p < 26; p++)
    {
        if (a[p] == max)
            count++;
        if (count > 1)
        {
            printf("?");
            return 0;
        }
    }
    printf("%c", m + 65);
}