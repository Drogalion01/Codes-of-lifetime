#include <stdio.h>
int main()
{
    int n, sum = 0, r, i;
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        r = i % 10;
        sum = sum + r * r * r;
        i = i / 10;
    }
    if (sum == n)
        printf("Armstrong");
    else
        printf("Not armstrong");
}