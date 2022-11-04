int digits(int num)
{
    int count = 0; 
    
    while (num > 0)
    {
        num /= 10; 
        count++;
    }
    
    return count; 
}

int findNumbers(int* nums, int numsSize){

    int count = 0; 
    
    for(int i=0; i<numsSize; i++)
    {
        int numdigits = digits(nums[i]);
        if ((numdigits & 1) == 0)
        {
            count++;
        }
    }
    return count;
}