int averageValue(int* nums, int numsSize){

    int sum = 0, count = 0;
    
    for(int i=0; i<numsSize; i++)
    {
        if (((nums[i] & 1) == 0) && (nums[i]%3 == 0))
        {
            sum += nums[i];
            count++;
        }
    }
    
    if(count != 0)
    {
        return (sum/count);
    }
    return 0;
}