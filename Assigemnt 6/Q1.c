#include<stdio.h>

int main()
{
    int i, n, sum =0;

    printf("Enter your number\n");
    scanf("%d", &n);

    for(i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum is = %d", sum );

    return 0;

}
