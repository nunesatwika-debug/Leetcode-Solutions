bool checkPerfectNumber(int num) {
    int sum=1;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        sum=sum+i+(num/i);
    }
    if(sum==num && num!=1)
    return true;
    else
    return false;
}