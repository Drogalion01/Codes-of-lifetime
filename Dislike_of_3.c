#include <stdio.h>
int main()
{
    int n, k, i, c;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &k);
        i=1;
        c=0;
        while (i <= 2000)
        {
            if (!(i % 3 == 0 || i % 10 == 3))
            {
                c++;
                if (c == k)
                {
                    printf("%d\n", i);
                    break;
                }
            }
            
            i++;
        }
    }
}