import java.util.Random;

class Solution {
    private static final Random RAND = new Random();

    public int[] sortArray(int[] nums) {
        threeWayQuickSort(nums, 0, nums.length - 1);
        return nums;
    }

    private void threeWayQuickSort(int[] nums, int low, int high) {
        if (low >= high) {
            return;
        }

        int pivot = nums[low + RAND.nextInt(high - low + 1)];
        int lt = low;   // nums[low .. lt - 1] < pivot
        int i = low;    // nums[lt .. i - 1] == pivot
        int gt = high;  // nums[gt + 1 .. high] > pivot

        while (i <= gt) {
            if (nums[i] < pivot) {
                swap(nums, lt, i);
                lt++;
                i++;
            } else if (nums[i] > pivot) {
                swap(nums, i, gt);
                gt--;
            } else {
                i++;
            }
        }

        // Skip [lt .. gt] since all elements there are already equal to pivot
        threeWayQuickSort(nums, low, lt - 1);
        threeWayQuickSort(nums, gt + 1, high);
    }

    private void swap(int[] nums, int a, int b) {
        if (a != b) {
            int temp = nums[a];
            nums[a] = nums[b];
            nums[b] = temp;
        }
    }
}