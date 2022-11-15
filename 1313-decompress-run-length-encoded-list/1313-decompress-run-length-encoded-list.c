/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize){

    int retSize = 0;
    for (int i = 0; i < numsSize; i+=2)
    {
        retSize += nums[i];
    }
    
    *returnSize = retSize; 
    int *retArr = (int *)malloc(sizeof(int)*retSize);
    memset(retArr, 0, (sizeof(int)*retSize));
    
    int j = 0;
    
    bool flag = false;
    for (int i=0; i<numsSize; i+=2)
    {
        for (int k = 0; k<nums[i]; k++)
        {
            retArr[j++] = nums[i+1];
            if (j >= retSize)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    
    return retArr; 
}