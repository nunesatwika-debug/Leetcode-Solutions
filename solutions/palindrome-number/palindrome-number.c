bool isPalindrome(int x) {
    if(x>=0){
    long long a=x,sum=0,r;
    while(a!=0){
        r=a%10;
        a=a/10;
        sum=sum*10+r;
    }
    if(x==sum)
    return true;
    else
    return false;
    }
    return false;
}