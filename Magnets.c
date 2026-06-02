#include<stdio.h>
#include<string.h>
int main()
{
    int n, c=0;
    char a[3], t[3];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        if(i!=0)
            strcpy(t,a);
        scanf("%s",a);
        if(strcmp(t,a)!=0)
            c++;
    }
    printf("%d\n", c);
}