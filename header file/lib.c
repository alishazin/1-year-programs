
int factorial(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return n * factorial(n - 1);
    }
}