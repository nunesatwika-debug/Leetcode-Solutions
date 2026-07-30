int accountBalanceAfterPurchase(int p) {
    if(p%10>=5)
        p+=(10-p%10);
    else
        p-=p%10;
    return 100-p;
}