#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[102];
    int u = 0, l = 0, r = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isupper(s[i]) != 0)
            u++;
        else if (islower(s[i]) != 0)
            l++;
    }
    if (u > l)
        printf("%s\n", strupr(s));
    else if (u <= l)
        printf("%s\n", strlwr(s));
}