#include <stdio.h>
int main() {
    int n = 3;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }
    printf("Sum of squares of first %d natural numbers is %d\n", n, sum);
    return 0;
}
