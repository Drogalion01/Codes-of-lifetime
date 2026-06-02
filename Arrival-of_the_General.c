#include <stdio.h>
int main()
{
    int n, a[100], c, k, u = 0, l = 101;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (u < a[i])
        {
            c = i + 1;
            u = a[i];
        }
        if (l >= a[i])
        {
            k = i + 1;
            l = a[i];
        }
    }
    if (c > k)
        printf("%d\n", c + n - k - 2);
    else
        printf("%d\n", c + n - k - 1);
}
