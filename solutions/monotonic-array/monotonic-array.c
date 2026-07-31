bool isMonotonic(int* nums, int n) {
    char tone,pretone;
    int s=0;
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]) continue;
        tone=(nums[i]<nums[i+1])?'i':'d';
        if(!s){
            pretone=tone;
            s=1;
        }
        else{
            if(tone==pretone){
                pretone=tone;
            }
            else
            return false;
        }
    }
    return true;
}