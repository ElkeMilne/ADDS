int sum_of_squares(int n) {
    return n == 1 ? 1 : n * n + sum_of_squares(n - 1);
}
