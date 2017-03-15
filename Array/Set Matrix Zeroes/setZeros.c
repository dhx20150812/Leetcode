void setZeroes(int** matrix, int matrixRowSize, int matrixColSize) {
    int i,j;
    int x[matrixRowSize];
    int y[matrixColSize];
    for(i=0;i<matrixRowSize;i++)
        x[i] = 0;
    for(j=0;j<matrixColSize;j++)
        y[j] = 0;
    // ͳ�Ƴ���0���к���
    for(i=0;i<matrixRowSize;i++)
        for(j=0;j<matrixColSize;j++)
        {
            if(matrix[i][j]==0)
                {
                    x[i] = 1;
                    y[j] = 1;
                }
        }
    // �ڶ��α�����������λ����0
    for(i=0;i<matrixRowSize;i++)
        if(x[i]==1)
        {
            for(j=0;j<matrixColSize;j++)
                matrix[i][j] = 0;
        }
    for(j=0;j<matrixColSize;j++)
        if(y[j]==1)
        {
            for(i=0;i<matrixRowSize;i++)
                matrix[i][j]=0;
        }
}