#include <stdio.h>

int main()
{
    char a[16];
    int count = 0;

    scanf("%s", a);
    for (int i = 0; a[i] != 0; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'C')
            count += 3;
        else if (a[i] >= 'D' && a[i] <= 'F')
            count += 4;
        else if (a[i] >= 'G' && a[i] <= 'I')
            count += 5;
        else if (a[i] >= 'J' && a[i] <= 'L')
            count += 6;
        else if (a[i] >= 'M' && a[i] <= 'O')
            count += 7;
        else if (a[i] >= 'P' && a[i] <= 'S')
            count += 8;
        else if (a[i] >= 'T' && a[i] <= 'V')
            count += 9;
        else if (a[i] >= 'W' && a[i] <= 'Z')
            count += 10;
    }
    printf("%d", count);
}