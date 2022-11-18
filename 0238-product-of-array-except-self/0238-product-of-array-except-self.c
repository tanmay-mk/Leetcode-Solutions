/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize; 
    
    int product=1; 
    bool zero = false; 
    int zeroes = 0;
    
    for(int i=0; i<numsSize; i++)
    {
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
    
    if (zeroes > 1)
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