/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numOfBurgers(int t, int c, int* returnSize) {
    if(t&1 || t<2*c || c<t/4){
        int *ans=(int *)malloc(0*sizeof(int));
        *returnSize=0;
        return ans;
    }
    else{
        int *ans=(int *)malloc(2*sizeof(int));
        *returnSize=2;
        ans[0]=(t-2*c)/2;
        ans[1]=c-ans[0];
        return ans;
    }
}