#include<stdio.h>
int main()
{
        printf("Name:Mahir Ashab ID:21020240\n\n");

        int N;
        printf("Enter a number to know the table:");
        scanf("%d",&N);
        for(int i = 1; i<=10; ++i){
            printf("%d x %d = %d\n", N, i, N*i);
        }
        return 0;
}