#include <stdio.h>
int main()
{
    int n, x[101], y[101], z[101], r = 0, t = 0, u = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
        r += x[i];
        t += y[i];
        u += z[i];
    }
    if (r == 0 && t == 0 && u == 0)
        printf("YES\n");
    else
        printf("NO\n");
}