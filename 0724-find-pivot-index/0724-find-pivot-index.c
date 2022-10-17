

int pivotIndex(int* nums, int numsSize){

    int sum = 0; 
    
    int leftHalfSum = 0;
    
    for(int i = 0; i<numsSize; i++)
    {
        sum+=nums[i];
    }
    
    for(int i = 0; i<numsSize; i++)
    {
        if(leftHalfSum == (sum - nums[i] - leftHalfSum))
        {
            return i;
        }
        leftHalfSum += nums[i];
    }
    return -1;
}