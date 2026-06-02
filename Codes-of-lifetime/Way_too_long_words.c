#include <stdio.h>
#include <string.h>
int main()
{
    char s[110];
    int j = 0, r, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        r = strlen(s);
        if (r > 10)
            printf("%c%d%c\n", s[0], (r - 2), s[r - 1]);
        else
        printf("%s\n",s);
    }
}