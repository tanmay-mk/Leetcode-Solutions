

int sumOfDigits(int* nums, int numsSize){

    int min = nums[0];
    
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    
    int result = 0; 
    while (min > 0)
    {
        int digit = min % 10;
        result += digit; 
        min /= 10;
    }
    
    if ((result & 1) == 0)
    {
        return 1;
    }
    
    return 0;
}