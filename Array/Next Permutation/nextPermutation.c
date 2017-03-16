void nextPermutation(int* nums, int numsSize) {
    int i = numsSize-1,j,tmp;
    while(*(nums+i)<=*(nums+i-1) && i>0)
        i--;
    if(i>0)
    {
        j = numsSize-1;
        while(*(nums+j) <= *(nums+i-1))
            j--;
        tmp;
        tmp = *(nums+j);
        *(nums+j) = *(nums+i-1);
        *(nums+i-1) = tmp;
    }
    j = numsSize-1;
    while(i<j)
    {
        tmp = *(nums+j);
        *(nums+j) = *(nums+i);
        *(nums+i) = tmp;
        i++;
        j--;
    }
}