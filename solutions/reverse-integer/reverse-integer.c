int reverse(int x){
    long int rev=0,r;
    while(x!=0){
        r=x%10;
        x=x/10;
        rev=rev*10+r;
    }
    if(rev<-pow(2,31)||rev>pow(2,31)-1)
        return 0;
    return rev;
}