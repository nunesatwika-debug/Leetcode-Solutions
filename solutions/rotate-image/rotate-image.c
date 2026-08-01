void rotate(int** m, int r, int* matrixColSize) {
    int t;
    for(int i=0;i<r;i++)
        for(int j=i+1;j<r;j++){
            t=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=t;
        }
    for(int i=0;i<r;i++){
        int l=0,ri=r-1;
        while(l<ri){
            t=m[i][l];
            m[i][l]=m[i][ri];
            m[i][ri]=t;
            l++;
            ri--;
        }
    }        
}