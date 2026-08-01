int equalPairs(int** grid, int r, int* c) {
    int s=0;
    for(int i=0;i<r;i++){
        int a[*c];
        for(int k=0;k<r;k++)
            a[k]=grid[i][k];
        for(int y=0;y<r;y++){
        int flag =1;
        for(int j=0;j<r;j++)
            if(a[j]!=grid[j][y]) flag=0;
        if(flag) s++;
        }
    }
    return s;
}