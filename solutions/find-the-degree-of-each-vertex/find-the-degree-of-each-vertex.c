/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** m, int n, int* matrixColSize, int* returnSize) {
    int* ans=(int*)malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=m[i][j];
        }
        ans[i]=sum;
    }
    *returnSize=n;
    return ans;
}