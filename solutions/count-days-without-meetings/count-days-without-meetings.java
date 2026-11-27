class Solution {
    public int countDays(int days, int[][] meetings) {
        Arrays.sort(meetings, (a, b) -> a[0] - b[0]);
        int free = 0;
        int end = 0;
        for (int[] m : meetings) {
            if (m[0] > end + 1) {
                free += m[0] - end - 1;
            }
            end = Math.max(end, m[1]);
        }
        return free + days - end;
    }
}
