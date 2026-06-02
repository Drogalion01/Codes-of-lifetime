#include <stdio.h>
int main()
{
    long n;
    int r;
    scanf("%ld", &n);
    if (n < 5)
    {
        r = 1;
    }
    else if (n % 5 == 0)
        r = n / 5;
    else if (n % 5 != 0)
        r = (n / 5) + 1;
    printf("%d\n", r);
}