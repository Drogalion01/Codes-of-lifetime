#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character=");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("this character is vowel=%c",ch);
    else
        printf("this character is consonant=%c",ch);
    return 0;
}
