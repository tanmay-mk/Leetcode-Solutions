

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize*2;
    
    int arrSize = numsSize*2;
    
    int *arr = (int *)malloc(sizeof(int)*arrSize);
    
    for (int i = 0; i<numsSize; i++)
    {
        arr[i] = nums[i];
        arr[i+numsSize] = nums[i];
    }
    
    return arr; 
}