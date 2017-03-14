void moveZeroes(int* nums, int numsSize) {
  int i=0,j;
    for(;i<numsSize-1;i++)
    	{
    	  if(nums[i]==0)//寻找0
            {
              j=i+1;
              while(nums[j]==0)//找到下一个非0，注意数组溢出
              {
                if(j==numsSize-1)
                    break;
                j++;
              }
              nums[i]=nums[j];
              nums[j]=0;
            }
        }
}