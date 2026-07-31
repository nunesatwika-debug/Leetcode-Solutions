int diagonalSum(int** mat, int n, int* matColSize) {
    int a=0,i=0,j=0;
    for(int k=0;k<n;k++){
            a+=mat[i++][j++];
    }
    i=0;
    j=n-1;
    for(int k=0;k<n;k++){
            if(i!=j)
            a+=mat[i++][j--];
            else{
            i++;j--;
            }
    }
    return a;
}