/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int n, int* returnSize) {
    int* a=(int*)malloc(sizeof(int)*n);
    *returnSize=n;
    for(int i=0;i<n;i++){
        a[i]=nums[nums[i]];
    }
    return a;
}