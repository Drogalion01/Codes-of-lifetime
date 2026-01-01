#include <stdio.h>
int main()
{
    char n[101];
    int t, c = 0;
    scanf("%s", &n);
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (i == 0)
            c++;
        else
        {
            t=0;
            for (int j = 0; j < i; j++)
            {
                if (n[j] == n[i])
                    t++;
            }
            if (t == 0)
                c++;
        }
    }
    if (c % 2 == 0)
        printf("CHAT WITH HER!\n");
    else if (c % 2 != 0)
        printf("IGNORE HIM!\n");
}