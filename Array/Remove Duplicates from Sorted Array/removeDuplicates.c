int removeDuplicates(int* nums, int numsSize) {
    if(numsSize<=1)
        return numsSize;
    int i=0,j=1;
    while(j<=numsSize-1)
    {
        if(*(nums+i)!=*(nums+j))
        {
            *(nums+i+1) = *(nums+j);
            i++;j++;
        }
        else
            j++;
    }
    return i+1;
}