/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int n, int* returnSize) {
    int* ans=(int *)malloc(sizeof(int)*2*n);
    *returnSize=2*n;
    for(int i=0;i<n;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[n-i-1];
    }
    return ans;
}