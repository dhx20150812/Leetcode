/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int nums_index1 = 0,nums_index2 = 0;
    int *answer;
    for(nums_index1 = 0;nums_index1 <= numsSize - 1; nums_index1 ++){
            for(nums_index2 = nums_index1 + 1;nums_index2 <= numsSize - 1; nums_index2 ++){
                if ((target - nums[nums_index1]) == nums[nums_index2]){
                    answer = (int*)malloc(2*sizeof(int));
                    answer[0] = nums_index1;
                    answer[1] = nums_index2;
                    return answer;
                }
            }
    }
    return;
}