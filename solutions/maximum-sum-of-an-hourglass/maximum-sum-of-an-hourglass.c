int maxSum(int** g, int r, int* c) {
    int max = INT_MIN,sum;
    for(int i=1;i<r-1;i++){
        for(int j=1;j<(*c)-1;j++){
            sum=g[i-1][j-1]+g[i-1][j]+g[i-1][j+1]+g[i][j]+g[i+1][j-1]+g[i+1][j]+g[i+1][j+1];
            if(sum>max) max=sum;
        }
    }
    return max;
}