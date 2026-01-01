#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int h=0, l=0, o=0, e=0;
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++)
    {
        if(h<=1)
        {
            if(h==0 && s[i]=='h')
            h++;
            else if(e<=1 && h==1)
            {
                if(e<1 && s[i]=='e')
                e++;
                else if(l<=2 && e==1)
                {
                    if(l<2 && s[i]=='l')
                    l++;
                    else if(o<=1 && l==2)
                    {
                        if(o<1 && s[i]=='o')
                        o++;
                    }
                }
            }
        }
    }
    if(o==0)
    printf("NO\n");
    else
    printf("YES\n");
}