#include <stdio.h>
#include <string.h>
int main()
{
    char n[110];
    int s;
    scanf("%s",n);
    strlwr(n);
    s = strlen(n);
    for (int i = 0; i < s; i++)
    {
        if (n[i] != 'a' && n[i] != 'e' && n[i] != 'i' && n[i] != 'o' && n[i] != 'u' && n[i] != 'y' )
            printf(".%c",n[i]);
    }
    printf("\n");
}