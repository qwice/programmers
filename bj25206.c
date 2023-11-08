#include <stdio.h>

int main()
{
    char name[50];
    float num;
    char grade[2];
    float count = 0;
    float ncount = 0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %f %s", name, &num, grade);
        if (grade[0] != 'P')
            ncount += num;
        if (grade[0] == 'A')
        {
            if (grade[1] == '+')
                count += 4.5 * num;
            else
                count += 4.0 * num;
        }
        else if (grade[0] == 'B')
        {
            if (grade[1] == '+')
                count += 3.5 * num;
            else
                count += 3.0 * num;
        }
        else if (grade[0] == 'C')
        {
            if (grade[1] == '+')
                count += 2.5 * num;
            else
                count += 2.0 * num;
        }
        else if (grade[0] == 'D')
        {
            if (grade[1] == '+')
                count += 1.5 * num;
            else
                count += 1.0 * num;
        }
        else if (grade[0] == 'F')
            count += 0 * num;
        else if (grade[0] == 'P')
            continue;
    }
    printf("%f", count / ncount);
}