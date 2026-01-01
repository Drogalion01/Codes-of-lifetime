#include <stdio.h>
int main()
{
    int n, c=0;
    scanf("%d", &n);
    if (n >= 100)
    {
        c += n / 100;
        n %= 100;
    }
    if (n >= 20)
    {
        c += n / 20;
        n %= 20;
    }
    if (n >= 10)
    {
        c += n / 10;
        n %= 10;
    }
    if (n >= 5)
    {
        c += n / 5;
        n %= 5;
    }
    if (n >= 1)
        c += n;
    printf("%d\n", c);
}