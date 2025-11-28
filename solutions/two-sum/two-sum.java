class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int x=0;x<nums.length-1;x++) {
            for(int j=x+1;j<nums.length;j++){
                if(nums[x]+nums[j]==target){
                    int arr[]= {x,j};
                    return arr;
                }
            }
        }
    return new int[0];
    }
}