#include <stdio.h>
#include <math.h>

int main()
{
    int a;

    scanf("%d", &a);
    printf("%.0f", (pow(2, a) + 1) * (pow(2, a) + 1)); // '.0' 붙여줘야 함
}