int totalMoney(int n) {
    int w=n/7,le=n%7,s=0,i,j,k;
    for(i=1;i<=w;i++)
        for(j=0;j<7;j++)
        s=s+i+j;
    for(k=0;k<le;k++)
        s=s+i+k;
    return s;
}