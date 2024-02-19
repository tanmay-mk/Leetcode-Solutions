int compare(int *a, int *b)
{
    return (*a - *b);    
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberGame(int* nums, int numsSize, int* returnSize) {
 
    int *arr = (int *)malloc(sizeof(int)*numsSize);
    memset(arr, 0, (sizeof(int)*numsSize));
    
    *returnSize = numsSize; 
    
    qsort(nums, numsSize, sizeof(int), compare);

    for(int i=1; i<numsSize; i+=2)
    {
        arr[i-1] = nums[i];
        arr[i] = nums[i-1]; 
    }
    
    return arr; 
}