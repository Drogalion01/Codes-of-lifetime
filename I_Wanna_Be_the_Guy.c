#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, p[100], q[100], r = 0, t=0;
    scanf("%d", &n);
    scanf("%d", &p[0]);
    for (int i = 1; i <= p[0]; i++)
        scanf("%d", &p[i]);
    scanf("%d", &q[0]);
    for (int i = 1; i <= q[0]; i++)
        scanf("%d", &q[i]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p[0]; j++)
        {
            if (i == p[j])
                r++;
        }
    }
    for (int i = 1; i <= p[0]; i++)
    {
        for (int j = 1; j <= q[0]; j++)
        {
            if (p[i] == q[j])
                t++;
        }
    }
    if ((n-r) == (q[0]-t))
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
}