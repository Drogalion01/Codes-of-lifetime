#include <stdio.h>
int main()
{
    int n, s, four = 0, three = 0, two = 0, one = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s);
        if (s == 4)
            four++;
        else if (s == 3)
            three++;
        else if (s == 2)
            two++;
        else if (s == 1)
            one++;
    }
    if (three >= one)
        one = 0;
    if (three < one)
        one = one - three;
    if (two != 0)
    {
        if (one >= 2)
            one -= ((two % 2) * 2);
        else if (one < 2 && two % 2 != 0)
            one = 0;
        two = (two / 2) + (two % 2);
    }
    if (one != 0)
    {
        if (one <= 4)
            one = 1;
        else
            one = (one+3) / 4;
    }
    printf("%d\n", four + three + two + one);
}