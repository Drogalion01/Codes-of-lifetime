#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101], s2[102], s[102];
    scanf("%s", s1);
    scanf("%s", s2);
    for(int i=0; i<strlen(s1); i++)
    {
        if(s1[i]==s2[i])
            s[i]='0';
        else if(s1[i]!=s2[i])
            s[i]='1';
    }
    s[strlen(s1)]='\0';
    printf("%s\n", s);
}