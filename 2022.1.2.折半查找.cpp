int search(int* nums, int numsSize, int target)
{
    int mid,low=0,up=numsSize-1;
    while(low<=up)
    {
           mid=(low+up)/2;
           if(target>nums[mid])
           low=mid+1;
           else if(target<nums[mid])
           up=mid-1;
           else
           return mid; 
    }
    return -1;
}