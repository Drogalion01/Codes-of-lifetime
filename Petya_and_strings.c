#include <stdio.h>
#include <ctype.h>
int main()
{
    char a[101], b[101];
    int s = 0;
    scanf("%s", &a);
    scanf("%s", &b);
    for (int i = 0, j = 0; a[i] != 0; i++, j++)
    {
        if (isupper(a[i]) != 0)
        {
            a[i] += 32;
        }
        if (isupper(b[j]) != 0)
        {
            b[j] += 32;
        }
        s+=(a[i]-b[i]);
        if(s>0||s<0)
        break;
    }
    if (s > 0)
        printf("1\n");
    else if (s < 0)
        printf("-1\n");
    else if (s == 0)
        printf("0\n");
}