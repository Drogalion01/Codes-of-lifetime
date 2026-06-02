#include <stdio.h>
int main()
{
    int n;
    long long l = 1, k = 2, luc;
    scanf("%d", &n);
    printf("%d\t", 2);
    printf("%d\t", 1);
    for (int i = 0; i < n-2; i++)
    {
        luc = k + l;
        printf("%lld\t", luc);
        k = l;
        l = luc;
    }
}