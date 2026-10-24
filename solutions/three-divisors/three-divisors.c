bool isThree(int n) {
    int r = (int)sqrt(n);
    if (r * r != n) return false;
    for (int i = 2; i * i <= r; i++)
        if (r % i == 0) return false;
    return r > 1;
}