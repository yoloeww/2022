int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
    int i,temp,j;
	if(numsSize==0) return nums;
    for(i=0;i<numsSize;i++)
    {
      nums[i]=nums[i]*nums[i];
    }
    for(i=0;i<numsSize-1;i++)
    {
    for(j=0;j<numsSize-1-i;j++)
    {
        if(nums[j]>nums[j+1])
        {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;

        }
    }
    }
    return nums;

}