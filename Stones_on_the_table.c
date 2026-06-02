#include <stdio.h>
#include <string.h>
int main()
{
    int n, u=0, r, t = 0;
    char s[51];
    scanf("%d", &n);
    scanf("%s", &s);
    r = strlen(s);
    for (int i = 1; i <= r - 1; i++)
    {
        if (s[i - 1] != s[i])
            continue;
        else if (s[i - 1] != s[i + 1])
        {
            t++;
            i++;
            if(s[i-1]==s[i])
            {
                t++;
            }
        }
        else if (s[i - 1] == s[i] && s[i] == s[i + 1])
            {
                t += 2;
                i++;
            }
    }
    printf("%d\n", t);
}