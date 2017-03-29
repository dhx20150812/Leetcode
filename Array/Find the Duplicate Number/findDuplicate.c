//有关这个算法的思想详见https://segmentfault.com/a/1190000003817671
int findDuplicate(int* nums, int numsSize) {
    int low = 1,high = numsSize - 1;
    while(low <= high){
        int mid = (high-low)*0.5 + low;
        int cnt = 0;
        int i;
        for(i=0;i<numsSize;i++){
            if(nums[i]<=mid)
                cnt++;
        }
        if(cnt>mid)
            high = mid-1;
        else
            low = mid+1;
    }
    return low;
}
