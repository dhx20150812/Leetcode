void moveZeroes(int* nums, int numsSize) {
  int i=0,j;
    for(;i<numsSize-1;i++)
    	{
    	  if(nums[i]==0)//Ѱ��0
            {
              j=i+1;
              while(nums[j]==0)//�ҵ���һ����0��ע���������
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