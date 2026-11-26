
import java.util.*;

class Solution {
    public int maxBuilding(int n, int[][] restrictions) {
        Arrays.sort(restrictions, (a, b) -> a[0] - b[0]);

        int m = restrictions.length;
        int[][] arr = new int[m + 2][2];

        arr[0][0] = 1;
        arr[0][1] = 0;

        for (int i = 0; i < m; i++) {
            arr[i + 1] = restrictions[i];
        }

        arr[m + 1][0] = n;
        arr[m + 1][1] = n - 1;

        for (int i = 1; i < m + 2; i++) {
            arr[i][1] = Math.min(arr[i][1], arr[i - 1][1] + arr[i][0] - arr[i - 1][0]);
        }

        for (int i = m; i >= 0; i--) {
            arr[i][1] = Math.min(arr[i][1], arr[i + 1][1] + arr[i + 1][0] - arr[i][0]);
        }

        int ans = 0;

        for (int i = 0; i < m + 1; i++) {
            int dist = arr[i + 1][0] - arr[i][0];
            int h1 = arr[i][1];
            int h2 = arr[i + 1][1];

            int maxHeight = (h1 + h2 + dist) / 2;
            ans = Math.max(ans, maxHeight);
        }

        return Math.max(ans, arr[m + 1][1]);
    }
}
