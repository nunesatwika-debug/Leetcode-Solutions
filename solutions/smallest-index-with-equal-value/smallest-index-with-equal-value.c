int smallestEqual(int* nums, int n) {
    int a=-1;
    for(int i=n-1;i>=0;i--){
        if(i % 10 == nums[i])
            a=i;
    }
    return a;
}