#include<stdio.h>
int main()
{
    int n,c=0;
    char x[4];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",&x);
        if(x[1]=='+')
        c++;
        else if(x[1]=='-')
        c--;
    }
    printf("%d\n",c);
}