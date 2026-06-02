#include <stdio.h>
int main()
{
    long n, t;
    int k;
    scanf("%ld %d", &n, &k);
    t = n;
    for (int i = 0; i < k; i++)
    {
        if (t % 10 == 0)
        {
            t /= 10;
            continue;
        }
        t--;
    }
    printf("%ld\n", t);
}