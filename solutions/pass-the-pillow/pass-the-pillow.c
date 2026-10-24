int passThePillow(int n, int time) {
    int r = time % (2 * (n - 1));
    return r < n ? r + 1 : 2 * n - 1 - r;
}