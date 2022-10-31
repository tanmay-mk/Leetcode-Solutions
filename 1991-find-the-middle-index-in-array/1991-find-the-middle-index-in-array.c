int findMiddleIndex(int* nums, int numsSize){

    int sum = 0;
    for(int i=0; i<numsSize; i++)
    {
        sum += nums[i];
    }
    
    int leftSum = 0; 
    
    for(int i=0; i<numsSize; i++)
    {
        if (leftSum == (sum - nums[i]-leftSum))
        {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}