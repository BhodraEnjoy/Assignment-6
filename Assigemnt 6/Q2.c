#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= 1* n; i += 2) {
        sum += i;
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);

    return 0;
}
