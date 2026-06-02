#include<stdio.h>
int main()
{
    int n,h,a,s=0;
    scanf("%d %d",&n, &h);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>h)
        s+=2;
        else if(a<=h)
        s++;
    }
    printf("%d\n",s);
}