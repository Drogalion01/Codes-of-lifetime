#include <stdio.h>
int main()
{
    int n, a, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            printf("HARD\n");
            break;
        }
        else if (a == 0)
            c++;
    }
    if (c == n)
        printf("EASY\n");
}