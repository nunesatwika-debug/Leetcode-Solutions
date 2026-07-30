/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int *ans=(int *)malloc(2*sizeof(int));
    *returnSize=2;
    int mindiff[2]={area,1};
    for(int i=1;i*i<=area;i++){
        if((area%i==0)&&(mindiff[0]-mindiff[1])>(area/i-i)){
                mindiff[0]=area/i;
                mindiff[1]=i;
        }
    }
    ans[0]=mindiff[0];
    ans[1]=mindiff[1];
    return ans;
}