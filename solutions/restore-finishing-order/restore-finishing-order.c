/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* recoverOrder(int* o, int os, int* f, int fs, int* returnSize) {
    int *a=(int *)malloc(sizeof(int)*fs);
    *returnSize=fs;
    int k=0;
    for(int j=0;j<os;j++){
        for(int i=0;i<fs;i++){
            if(o[j]==f[i])
            a[k++]=f[i];
        }
    }
    return a;
}