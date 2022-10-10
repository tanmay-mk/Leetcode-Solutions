int singleNumber(int* nums, int numsSize){

    if(numsSize == 1)
    {
        return nums[0];
    }

    int value=0;
    int count = 0;
    int flag = 0;

    for (int i = 0; i<numsSize; i++)
    {
        for (int j = 0; j<numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
                if (count == 2)
                {
                    count = 0;
                    flag = 1;
                    break;
                }
            }
        }
        if (!flag)
        {
            value = nums[i];
        }
        flag = 0;
    }
    return value;
}
