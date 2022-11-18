/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize; 
    
    int product=1; 
    int sum = 0;
    bool zero = false; 
    bool nonzero = false;
    int zeroes = 0;
    
    for(int i=0; i<numsSize; i++)
    {
        if (nonzero == false && nums[i] != 0)
        {
            nonzero = true;
        }
        
        sum += nums[i];
        if (nums[i] == 0)
        {
            zeroes++;
            zero = true;
        }
        else
        {
            product *= nums[i];
        }
    }
    
    int *retArr = (int *)malloc(sizeof(int)*numsSize);
    memset(retArr, 0, (sizeof(int)*numsSize));
    
    if (sum == 0 && nonzero == false)
    {
        return retArr; 
    }
    else if (zeroes > 1)
    {
        return retArr;
    }
    
    
    for(int i=0; i<numsSize; i++)
    {
        if (zero == true)
        {
            if (nums[i] == 0)
            {
                retArr[i] = product;
            }
            else
            {
                retArr[i] = 0;
            }
        }
        else
        {
            retArr[i] = product/nums[i];
        }
    }
    return retArr; 
}