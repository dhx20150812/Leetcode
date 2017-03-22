int missingNumber(int* nums, int numsSize) {
    int res=numsSize,i;
    for(i=0;i<numsSize;i++)
        res ^= nums[i]^i;
    return res;
}
