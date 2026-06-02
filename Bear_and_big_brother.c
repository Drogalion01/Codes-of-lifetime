#include<stdio.h>
int main()
{
    int a,b,i=0;
    scanf("%d %d",&a,&b);
    for(int t=0;t<=100;t++)
    {
        a=3*a;
        b=2*b;
        i++;
        if(a>b)
        break;
    }
    printf("%d\n",i);
}