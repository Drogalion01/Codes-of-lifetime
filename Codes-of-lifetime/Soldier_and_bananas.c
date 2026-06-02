#include <stdio.h>
int main()
{
    long n, r = 0, t = 0;
    int k, w;
    scanf("%d %ld %d", &k, &n, &w);
    for (int i = 1; i <= w; i++)
        
        r += k * i;
    t = r - n;
    if (t > 0)
        printf("%ld\n", t);
    if (t <= 0)
        printf("0\n");
}