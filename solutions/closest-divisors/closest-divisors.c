/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* closestDivisors(int num, int* returnSize) {
    *returnSize =2;
    int i;
    int c=1;
    int *a = malloc(2 * sizeof(int));
    for(i=1;i*i<=(num+2);i++){
        if((num+1)%i==0){
            if(c){
                c=0;
                a[0]=i;
                a[1]=(num+1)/i;
            }
            else if(((num+1)/i - i)<a[1]-a[0]){
                a[0]=i;
                a[1]=(num+1)/i;
            }
        }
        if((num+2)%i==0){
            if(c){
                c=0;
                a[0]=i;
                a[1]=(num+2)/i;
            }
            else if(((num+2)/i - i)<a[1]-a[0]){
                a[0]=i;
                a[1]=(num+2)/i;
            }
        }
    }
    return a;
}