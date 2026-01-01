#include <stdio.h>
int main()
{
    int a, b, c, t[6], u = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    for (int i = 0; i < 6; i++)
    {
        switch (i)
        {
        case 0:
            t[i] = a * b + c;
            break;
        case 1:
            t[i] = a + b * c;
            break;
        case 2:
            t[i] = (a + b) * c;
            break;
        case 3:
            t[i] = a * b * c;
            break;
        case 4:
            t[i] = a * (b + c);
            break;
        case 5:
            t[i] = a + b + c;
            break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (t[i] > u)
            u = t[i];
    }
    printf("%d\n", u);
}