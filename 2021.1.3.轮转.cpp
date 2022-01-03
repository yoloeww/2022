void rotate(int* nums, int numsSize, int k)
{
    //��ʱBuffer�ķ�ʽ����������
    int* new_nums = (int*)malloc(sizeof(int) * numsSize);
    int i;
    int distance;
    k = k % numsSize;
    if (k == 0 || numsSize == 1)
    {
        return;
    }


    for (i = 0; i < numsSize; i++)
    {
        distance = (i + k) % numsSize;
        new_nums[distance]  = nums[i];
    }

    for (i = 0; i < numsSize; i++)
    {
        nums[i] =  new_nums[i];
    }

}