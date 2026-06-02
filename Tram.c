#include <stdio.h>
int main()
{
    int n, a, b, s = 0, t, r, u = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        t = s;
        s += (b - a);
        if ((t - s) > 0)
        {
            if (u == 0)
                r = t;
            else if (u > 0 && t > r)
                r = t;
            u++;
        }
    }
        printf("%d\n", r);
    }