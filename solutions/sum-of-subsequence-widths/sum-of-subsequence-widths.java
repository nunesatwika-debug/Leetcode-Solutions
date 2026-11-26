
import java.util.*;

class Solution {
    public int sumSubseqWidths(int[] nums) {
        Arrays.sort(nums);

        int n = nums.length;
        long mod = 1000000007;
        long[] pow = new long[n];

        pow[0] = 1;

        for (int i = 1; i < n; i++) {
            pow[i] = (pow[i - 1] * 2) % mod;
        }

        long ans = 0;

        for (int i = 0; i < n; i++) {
            long max = (nums[i] * pow[i]) % mod;
            long min = (nums[i] * pow[n - 1 - i]) % mod;

            ans = (ans + max - min + mod) % mod;
        }

        return (int) ans;
    }
}
