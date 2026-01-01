#include <stdio.h>
int main()
{
    int y, r[4], i, t, u;
    scanf("%d", &y);
    while (1)
    {
        y++;
        t = y;
        i = 0;
        while (t != 0)
        {
            r[i] = t % 10;
            t /= 10;
            i++;
        }
        if (r[0] != r[1] && r[0] != r[2] && r[0] != r[3] && r[1] != r[2] && r[1] != r[3] && r[2] != r[3])
            break;
    }
    printf("%d\n", y);
}