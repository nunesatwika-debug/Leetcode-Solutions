class Solution {
    public double myPow(double x, int n) {
        if(n==0) return 1;
        if(n>0){
            double temp= myPow(x,n/2);
            if(n%2==0){
                return temp*temp;
            }
            else{
                return x*temp*temp;
            }
        }
        else{
            if(n==Integer.MIN_VALUE){
                return 1/(myPow(x, -(n/2))*myPow(x, -(n/2)));
            }
            return 1/myPow(x,-n);
        }
    }
}