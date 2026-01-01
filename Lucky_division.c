#include <stdio.h>
int main()
{
    int n, r, t, c = 0, i = 0;
    scanf("%d", &n);
    if (n % 4 == 0 || n % 7 == 0 || n%47==0 || n%74==0)
        printf("YES\n");
    else
    {
        t = n;
        while (t != 0)
        {
            r = t % 10;
            i++;
            if (r == 4 || r == 7)
                c++;
            else
            {
                printf("NO\n");
                break;
            }
            t /= 10;
        }
        if (c == i)
        printf("YES\n");
    }
}