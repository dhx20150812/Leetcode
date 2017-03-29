int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i,len = 0,maxOnes = 0;
    for(i=0;i<numsSize;i++){
        if(nums[i])
            len++;
        else
            len=0;
        maxOnes = maxOnes>len?maxOnes:len;
    }
    return maxOnes;
}
