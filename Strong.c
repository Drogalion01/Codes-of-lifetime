#include <stdio.h>
int main()
{
    int n, i, r, sum = 0, k;
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        r = i % 10;
        k = 1;
        for (int j = 1; j <= r; j++)
        {
            k *= j;
        }
        sum += k;
        i /= 10;
    }
    if (sum == n)
        printf("Strong");
    else
        printf("Not strong");
}