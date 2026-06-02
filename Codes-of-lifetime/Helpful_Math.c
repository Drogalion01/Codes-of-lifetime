#include <stdio.h>
#include <string.h>
int main()
{
    char n[102], s;
    int t;
    scanf("%s", &n);
    t = strlen(n);
    for (int i = 0; i <= t; i += 2)
    {
        for (int j = i; j <= t; j += 2)
        {
            if (n[j] == n[i])
                continue;
            else if (n[j] < n[i])
            {
                s = n[i];
                n[i] = n[j];
                n[j] = s;
            }
        }
    }
    printf("%s\n", n);
}