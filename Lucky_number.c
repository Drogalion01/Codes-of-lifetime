#include<stdio.h>
int main()
{
    long long a;
    int c=0, b=0, i=0;
    scanf("%lld", &a);
    while(a!=0)
    {
        c=a%10;
        if(c==4 || c==7)
        {
            b++;
        }
        a=a/10;
    }
    if(b==4 || b==7)
    {
        printf("YES\n");
    }
    else
    printf("NO\n");
}