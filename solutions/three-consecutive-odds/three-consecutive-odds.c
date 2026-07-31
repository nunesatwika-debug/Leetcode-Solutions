bool threeConsecutiveOdds(int* arr, int n) {
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]&1) c++;
        else c=0;
        if(c==3) return true;
    }
    return false;
}