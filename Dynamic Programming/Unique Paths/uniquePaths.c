int uniquePaths(int m, int n) {
    /*
     由于问题中的m和n可以给的较大，这个问题不能使用递归，可以考虑二维的动态规划
    */
    int i,j;
    int **matrix = (int**)malloc(m*sizeof(int*));
    for(i=0;i<m;i++){
        *(matrix+i) = (int*)malloc(n*sizeof(int));
        *(*(matrix+i)) = 1;
    }
    for(j=0;j<n;j++){
        *(*matrix+j) = 1;
    }
    for(i=1;i<m;i++)
        for(j=1;j<n;j++){
            *(*(matrix+i)+j) = *(*(matrix+i)+j-1) + *(*(matrix+i-1)+j);
        }
    return *(*(matrix+m-1)+n-1);
}
