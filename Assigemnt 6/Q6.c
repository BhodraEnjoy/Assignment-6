#include<stdio.h>
int main()
{
    int f =1, n;

        printf("Enter your number\n");
        scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    printf("%\nFactorial of %d is %d",n, f);
}

