#include <stdio.h>

int main()
{
    char a[37];
    int b, num;
    int i = 0;
    int count = 0;

    for (int j = 0; j < 37; j++)
    {
        a[j] = NULL;
    }
    scanf("%s %d", a, &b);
    while (a[i] != 0)
        i++;
    for (int j = 0; j < i; j++) // j = i-1 부터 시작해서 틀림 ,,
    {
        if (a[j] >= '0' && a[j] <= '9')
            num = a[j] - '0';
        else if (a[j] >= 'A')
            num = a[j] - 'A' + 10;
        count = count * b + num;
    }
    printf("%d", count);
}