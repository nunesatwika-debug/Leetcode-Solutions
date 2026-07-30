int sumBase(int n, int k) {
    int a=n,sum=0,r;
    while(a!=0){
        r=a%k;
        a=a/k;
        sum=sum+r;
    }
    return sum;
}