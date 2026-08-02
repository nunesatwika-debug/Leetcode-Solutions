bool isToeplitzMatrix(int** matrix, int mr, int* mc) {
    int c=mc[0];
    for(int i=1;i<mr;i++)
        for(int j=1;j<c;j++)
            if(matrix[i][j]!=matrix[i-1][j-1])
                return false;
    return true;
}