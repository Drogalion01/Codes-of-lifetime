#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],t[101];
    int u;
    scanf("%s",s);
    scanf("%s",t);
    strrev(t);
    u=strcmp(s,t);
    if(u==0)
    printf("YES\n");
    else
    printf("NO\n");
}