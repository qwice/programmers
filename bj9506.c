#include <stdio.h>

int main()
{
    int a, b;

    for (int i = 0;; i++)
    {
        scanf("%d", &a);
        b = 0;
        if (a == -1)
            break;
        else
        {
            for (int j = 1; j < a; j++)
            {
                if (a % j == 0)
                    b += j;
            }
            if (a == -1)
                return 0;
            else if (b == a)
            {
                printf("%d = ", a);
                for (int k = 1; k < a; k++)
                {
                    if (a % k == 0){
                        printf("%d", k);
                        for (int l = k + 1; l < a; l++)
                        {
                            if (a % l == 0)
                            {
                                printf(" + ");
                                break;
                            }
                        }
                    }
                }
            }
            else
                printf("%d is NOT perfect.", a);
            printf("\n");
        }
    }
}