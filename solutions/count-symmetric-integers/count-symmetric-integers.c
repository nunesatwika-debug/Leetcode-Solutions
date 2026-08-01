int countSymmetricIntegers(int low, int high) {
    int c=0,t,nod;
    for(int i=low;i<=high;i++){
        t=i;
        nod=floor(log10(t))+1;
        if(nod&1) continue;
        else{
            int s1=0,s2=0;
            for(int x=0;x<nod/2;x++){
                s1+=t%10;
                t/=10;
            }
            for(int x=0;x<nod/2;x++){
                s2+=t%10;
                t/=10;
            }
            if(s1==s2) c++;
        }
    }
    return c;
}