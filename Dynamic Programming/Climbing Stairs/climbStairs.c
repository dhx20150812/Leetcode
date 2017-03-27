int climbStairs(int n) {
    int *num = (int*)malloc((n+1)*sizeof(int));
    *num = 0;
    *(num+1) = 1;
    *(num+2) = 2;
    int i;
    for(i=3;i<n+1;i++){
        *(num+i) = *(num+i-1) + *(num+i-2);
    }
    return *(num+n);
}
