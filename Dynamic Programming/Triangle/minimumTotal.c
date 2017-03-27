int minimumTotal(int** triangle, int triangleRowSize, int *triangleColSizes) {
    int i,j;int val1,val2;
    for(i=triangleRowSize-2;i>=0;i--)
        for(j=0;j<*(triangleColSizes+i);j++){
            val1 = *(*(triangle+i)+j) + *(*(triangle+i+1)+j);
            val2 = *(*(triangle+i)+j) + *(*(triangle+i+1)+j+1);
            *(*(triangle+i)+j) = val1<val2?val1:val2;
        }
    return *(*triangle);
}
