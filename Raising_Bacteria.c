#include <stdio.h>
int main()
{
    long x, r, s=1;
    scanf("%ld", &x);
    r=x;
    while(r!=1)
    {
        if(r%2!=0)
        s++;
        r/=2;
    }
    printf("%ld\n", s);
}