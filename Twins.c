#include <stdio.h>
int main()
{
    int n, a[100], s = 0, s1 = 0, r = 0, t=0, u = 0, c = 0, l;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s += a[i];
    }
    while (u < n)
    {
        c = 0;
        for (int i = u; i < n; i++)
        {
            if (a[i] > c)
            {
                c = a[i];
                l = i;
            }
        }
        a[l] = a[u];
        a[u] = c;
        u++;
    }
    for(int i=0; i<n; i++)
    {
        s1+=a[i];
        r=s-s1;
        t++;
        if(s1>r)
        break;
    }
    printf("%d\n",t);
}