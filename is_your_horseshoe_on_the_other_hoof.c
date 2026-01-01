#include <stdio.h>
int main()
{
    long s[4];
    int c=0;
    scanf("%ld %ld %ld %ld", &s[0], &s[1], &s[2], &s[3]);
    if(s[0]==s[1] || s[0]==s[2] || s[0]==s[3])
        c++;
    if(s[1]==s[2] || s[1]==s[3])
        c++;
    if(s[2]==s[3])
        c++;
    printf("%d\n",c);
}