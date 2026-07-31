/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rowAndMaximumOnes(int** mat, int n, int* m, int* returnSize) {
    int *a=(int*)malloc(sizeof(int)*2);
    *returnSize=2;
    int max=0,maxs=-1,s;
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j< *m;j++){
            s = s + mat[i][j];
        }
        if(s>maxs){
            max=i;
            maxs=s;
        }
    }
    a[0]=max;
    a[1]=maxs;
    return a;
}