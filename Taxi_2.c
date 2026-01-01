#include <stdio.h>
int main()
{
    int n, s, four = 0, three = 0, two = 0, one = 0, sum = 0;
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
    sum += four;
    sum += three;
    sum += (two + 1) / 2;
    one -= three;
    if (two & 1)
        one -= 2;
    one += 3;
    one /= 4;
    if (one > 0)
        sum += one;
    printf("%d\n", sum);
}