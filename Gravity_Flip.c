#include <stdio.h>
int main()
{
    int n, a[100], u, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<n; i++)
    {
        u=101;
        for(int j=i; j<n; j++)
        {
            if(u>a[j])
            {
                u=a[j];
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d ", a[i]);
    }
}