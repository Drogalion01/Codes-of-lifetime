#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[1000];
    scanf("%s",&a);
    if(isupper(a[0])==0)
    {
        a[0]-=32;
        printf("%s\n",a);
    }
    else if(isupper(a[0])!=0)
    printf("%s\n",a);
}