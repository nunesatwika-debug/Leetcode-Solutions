int countHillValley(int* nums, int n) {
    int temp[n];
    int ts=0;
    temp[ts++]=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]){
            temp[ts++]=nums[i];
        }
    }
    int c=0;
    for(int i=1;i<ts-1;i++){
        if(temp[i]>temp[i-1]&&temp[i]>temp[i+1]) c++;
        else if(temp[i]<temp[i-1]&&temp[i]<temp[i+1]) c++;
    }
    return c;
}