/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize; 
    
    int *retArr = (int *)malloc(sizeof(int)*numsSize);
    memset(retArr, 0, (sizeof(int)*numsSize));
    
    int odd = 1, even = 0;
    
    for(int i=0; i<numsSize; i++)
    {
        if ((nums[i] & 1) == 0)
        {
            retArr[even]=nums[i];
            even+=2;
        }
        else
        {
            retArr[odd]=nums[i];
            odd += 2;
        }
    }
    
    return retArr; 
}