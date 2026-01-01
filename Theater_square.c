#include <stdio.h>
int main()
{
    unsigned long long m, n, a, c, l;
    scanf("%llu %llu %llu", &m, &n, &a);
    if (m % a == 0 || n % a == 0)
    {
        if (m % a == 0 && n % a == 0)
        {
            l = (m / a);
            c = (n / a);
        }
        else if (n % a == 0 && m % a != 0)
        {
            c = n / a;
            l = (m / a) + 1;
        }
        else if (m % a == 0 && n % a != 0)
        {
            l = m / a;
            c = (n / a) + 1;
        }
    }
    else
    {
        l = (m / a) + 1;
        
        c = (n / a) + 1;
    }
    printf("%llu\n", l * c);
}