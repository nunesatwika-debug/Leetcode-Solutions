int deleteGreatestValue(int** grid, int r, int* c) {
    int cou=0;
    for(int k=0;k<*c;k++){
        int m[r];
    for(int i=0;i<r;i++){
        int max=-1,s=-1;
        for(int j=0;j<*c;j++)
        if(grid[i][j]>max){
            max=grid[i][j];
            s=j;
        }
        m[i]=max;
        grid[i][s]=-1;
    }
    int ab=0;
    for(int p=0;p<r;p++)
        if(m[p]>ab) ab=m[p];
    cou+=ab;
    }
    return cou;
}