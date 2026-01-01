#include<stdio.h>
int main()
{
    long long n, s;
    scanf("%lld", &n);
    if(n%2==0)
        s=((n/2)*((n/2)+1))-((n/2)*(n/2));
    else
        s=((n/2)*((n/2)+1))-((n/2)*(n/2))-n;
    printf("%lld\n", s);
}