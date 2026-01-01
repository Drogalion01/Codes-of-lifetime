#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int k,z=0;
    k=strlen(s);
    for(int i=0;i<k;i++)
    {
        if(s[i]==s[i+1])
        {
            z++;
            if(z==6)
            break;
        }
        else if(s[i]!=s[i+1])
        {
            z=0;
        }
    }
    if(z==6)
    printf("YES\n");
    else if(z!=7)
    printf("NO\n");
}