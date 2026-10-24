bool checkMove(char** board, int boardSize, int* boardColSize, int rMove, int cMove, char color) {
    int dirs[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    char opp = color == 'B' ? 'W' : 'B';
    for (int d = 0; d < 8; d++) {
        int r = rMove + dirs[d][0], c = cMove + dirs[d][1], count = 0;
        while (r >= 0 && r < boardSize && c >= 0 && c < boardColSize[0] && board[r][c] == opp) {
            r += dirs[d][0];
            c += dirs[d][1];
            count++;
        }
        if (count > 0 && r >= 0 && r < boardSize && c >= 0 && c < boardColSize[0] && board[r][c] == color)
            return true;
    }
    return false;
}