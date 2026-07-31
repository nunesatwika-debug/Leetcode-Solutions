int alternateDigitSum(int n) {
    int nod=floor(log10(n))+1,s=0,sign=0,r;
    while(n!=0){
        r=n%10;
        if(nod&1){
            if(sign) r*=-1;
            s+=r;
            sign = (sign+1)%2;
        }
        else{
            if(!sign) r*=-1;
            s+=r;
            sign =(sign+1)%2;
        }
    n/=10;
    }
    return s;
}