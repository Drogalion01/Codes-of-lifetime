#include<stdio.h>
int main()
{
    int n, p, v, t, i, b=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d", &p, &v, &t);
        if((p+v+t) >= 2)
        {
            b++;
        }
    }
    printf("%d\n", b);
}