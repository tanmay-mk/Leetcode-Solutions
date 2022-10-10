

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){

    *returnSize = numsSize; 
    
    int *arr = (int *)malloc(sizeof(int)*numsSize);
    memset(arr, 0, sizeof(int)*numsSize);
    
    int half = numsSize; 
    half = (half >> 1); //equivalent to divide by 2
    
    int j = half;
    int k = 0;
    for (int i = 0; i<half; i++)
    {
        arr[k++] = nums[i];
        arr[k++] = nums[j];
        j++;
        
    }
    return arr; 
}