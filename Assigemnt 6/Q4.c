int main() {
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    printf("Sum of squares of first %d natural numbers is %d\n", n, sum);
    return 0;
}
