

int countOdds(int low, int high){
    int num=high-low+1;
    int a=(high-low+1)/2;
    if(num&1 && low&1)
        return a+1;
    else
        return a;
}