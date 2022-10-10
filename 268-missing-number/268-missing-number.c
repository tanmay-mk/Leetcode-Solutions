

int missingNumber(int* nums, int numsSize){

    int expected_sum = 0, actual_sum = 0;
    
    for(int i = 0; i<=numsSize; i++)
    {
        expected_sum += i;
        
        if(i != numsSize)
        {
            actual_sum += nums[i];
        }
    }
    
    return  (expected_sum - actual_sum);
}