class Solution {
    public int maximizeSquareHoleArea(int n, int m, int[] hBars, int[] vBars) {
        Arrays.sort(hBars);
        Arrays.sort(vBars);
        int h = 1, v = 1;
        int maxH = 1, maxV = 1;
        for (int i = 1; i < hBars.length; i++) {
            if (hBars[i] == hBars[i - 1] + 1) {
                h++;
            } else {
                h = 1;
            }
            maxH = Math.max(maxH, h);
        }
        for (int i = 1; i < vBars.length; i++) {
            if (vBars[i] == vBars[i - 1] + 1) {
                v++;
            } else {
                v = 1;
            }
            maxV = Math.max(maxV, v);
        }
        int side = Math.min(maxH, maxV) + 1;
        return side * side;
    }
}
