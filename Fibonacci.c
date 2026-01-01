#include<stdio.h>
int main()
{
    int n;
    long long l=0, k=1, fibo;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i==0)
            printf("%d\t",i);
        else
        {
        fibo=k+l;
        printf("%lld\t",fibo);
        k=l;
        l=fibo;
        }
    }
}