#include <stdio.h>
int main()
{
    int n, i, r, sum = 0;
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        r = i % 10;
        sum = sum * 10 + r;
        i = i / 10;
    }
    if (sum == n)
        printf("Palindrome");
    else
        printf("Not palindrome");
}