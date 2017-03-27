int minPathSum(int** grid, int gridRowSize, int gridColSize) {
    int i,j;
    for(i=1;i<gridRowSize;i++)
        *(*(grid+i)) += *(*(grid+i-1));
    for(j=1;j<gridColSize;j++)
        *(*grid+j) += *(*grid+j-1);
    int val1,val2;
    for(i=1;i<gridRowSize;i++)
        for(j=1;j<gridColSize;j++){
            val1 = *(*(grid+i)+j) + *(*(grid+i-1)+j); //上面的
            val2 = *(*(grid+i)+j) + *(*(grid+i)+j-1); //左面的
            *(*(grid+i)+j) = val1<val2?val1:val2;
        }
    return *(*(grid+gridRowSize-1)+gridColSize-1);
}
