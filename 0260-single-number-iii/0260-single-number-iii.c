

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize){

    *returnSize = 2;
    
    int *retArr = (int *)malloc(sizeof(int)*2);
    memset(retArr, 0, sizeof(int)*2);
    
    int xor=nums[0];
    
    int x = 0, y = 0;
    
    int set_bit = 1;
    
    for(int i=1; i<numsSize; i++)
    {
        xor ^= nums[i];
    }
    
    //set_bit = (xor & ~(xor - 1));
    
    if (xor <= INT_MIN)
    {
        xor = INT_MIN+1;
    }
    
    set_bit = (xor & (-xor));
    
    for (int i = 0; i<numsSize; i++)
    {
        int k = nums[i];
        if ((nums[i] & set_bit) != 0)
        {
            x ^= nums[i];
        }
        else
        {
            y ^= nums[i];
        }
    }
    
    retArr[0] = x;
    retArr[1] = y;
    
    return retArr;
}