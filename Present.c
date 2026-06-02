#include <stdio.h>
int main()
{
    int n, p[100], t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);
    for(int j=1; j<=n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if(j==p[i])
                printf("%d ", i+1);
        }
    }
}