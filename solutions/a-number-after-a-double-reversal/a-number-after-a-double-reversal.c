bool isSameAfterReversals(int num) {
    int a=num,rev=0,r,rev2=0;
    while(a!=0){
        r=a%10;
        a=a/10;
        rev=rev*10+r;
    }
    while(rev!=0){
        r=rev%10;
        rev=rev/10;
        rev2=rev2*10+r;
    }
    if(num==rev2)
        return true;
    else
        return false;
}