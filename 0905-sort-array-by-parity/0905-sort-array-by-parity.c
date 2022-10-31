/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize; 
    
    int *sorted = (int *)malloc(sizeof(int)*numsSize);
    memset(sorted, 0, (sizeof(int)*numsSize));
    
    int i=0; int j = numsSize-1; 
    
    for(int k = 0; k<numsSize; k++)
    {
        if (0 == (nums[k]%2))
        {
            //number is even
            sorted[i++] = nums[k];
        }
        else 
        {
            //number is odd
            sorted[j--] = nums[k];
        }
            
    }
    return sorted;
}