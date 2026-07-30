bool isReachableAtTime(int sx, int sy, int fx, int fy, int t){
    int h=abs(fx-sx),w=abs(fy-sy);
    if(h==0&&w==0&&t==1)
    return false;
    return t>=(h>w?h:w);
}