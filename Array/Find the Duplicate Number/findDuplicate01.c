int findDuplicate(int* nums, int numsSize) {
    int slow = 0,fast = 0;
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(fast!=slow);
    int begin = 0;
    while(begin!=slow){
        begin = nums[begin];
        slow = nums[slow];
    }
    return begin;
}
