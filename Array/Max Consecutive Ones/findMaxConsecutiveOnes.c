int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxOnes = 0;
    int i=0,j=0;
    while(j<numsSize){
        while(i<numsSize && nums[i]!=1)
            i++;
        int cnt = 0;
        j = i;
        while(j<numsSize && nums[j]==1){
            cnt++;
            j++;
        }
        if(cnt>maxOnes) maxOnes = cnt;
        i = j;
    }
    return maxOnes;
}
