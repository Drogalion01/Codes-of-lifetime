#include <stdio.h>
int main()
{
    int n, a, b, j;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b && a % b != 0)
        {
            j = (a+b-1) / b;
            printf("%d\n", b * j - a);
        }
        else if (a % b == 0)
            printf("0\n");
        else if (a < b)
            printf("%d\n", b - a);
    }
}