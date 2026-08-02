int calcost(int mins,int secs,int startAt,int moveCost,int pushCost){
    if(mins<0||mins>99||secs<0||secs>99)
        return 2e9;
    int digits[4];
    int len=0;
    if(mins>0){
        if(mins>=10) digits[len++]=mins/10;
            digits[len++]=mins%10;
        digits[len++]=secs/10;
        digits[len++]=secs%10;
    }
    else{
        if(secs>=10){
            digits[len++]=secs/10;
        }
        digits[len++]=secs%10;
    }
    int cost =0;
    int curr=startAt;
    for(int i=0;i<len;i++){
        if(digits[i]!=curr){
            cost+=moveCost;
            curr=digits[i];
        }
        cost+=pushCost;
    }
    return cost;
}
int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
    int m1=targetSeconds/60;
    int s1=targetSeconds%60;
    int c1=calcost(m1,s1,startAt,moveCost,pushCost);
    int m2=m1-1;
    int s2=s1+60;
    int c2=calcost(m2,s2,startAt,moveCost,pushCost);
    return (c1<c2)?c1:c2;
}