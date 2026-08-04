int max(int a, int b) {
    return (a > b) ? a : b;
}

int absVal(int x) {
    return (x < 0) ? -x : x;
}

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int ans = 0;

    for (int i = 1; i < pointsSize; i++) {
        int dx = absVal(points[i][0] - points[i - 1][0]);
        int dy = absVal(points[i][1] - points[i - 1][1]);

        ans += max(dx, dy);
    }

    return ans;
}