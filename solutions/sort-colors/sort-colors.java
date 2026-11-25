class Solution {
    public void sortColors(int[] nums) {
        int i = -1, j = nums.length, k = 0;
        while (k < j) {
            if (nums[k] == 0) {
                i++;
                int temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                k++;
            }
            else if (nums[k] == 2) {
                j--;
                int temp = nums[j];
                nums[j] = nums[k];
                nums[k] = temp;
            }
            else {
                k++;
            }
        }
    }
}