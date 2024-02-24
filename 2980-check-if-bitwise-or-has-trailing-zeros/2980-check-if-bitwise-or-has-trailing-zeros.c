bool hasTrailingZeros(int* nums, int numsSize) {
    
    int evenNum = 0;
    
    //in even numbers, least significant bit will always be zero
    //in odd numbers, least significant bit will always be one
    //if we OR one odd number with one even number, LSB will always be 1
    //if we OR two odd numbers, LSB will always be 1
    //if we OR two even numbers, LSB will always be 0
    //if there are two or more even numbers, their bitwise OR will have a trailing zero
    
    for(int i = 0; i<numsSize; i++)
    {
        if ((nums[i] & 1) == 0)
        {
            evenNum++; 
            if (evenNum == 2)
            {
                return true;
            }
        }
    }
    return false; 
}