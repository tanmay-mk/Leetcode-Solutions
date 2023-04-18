typedef struct numChars
{
    int val;
    int occurrences; 
}numChars_t;

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize){

    numChars_t *arr = (numChars_t *)malloc(sizeof(numChars_t)*numsSize);
    memset(arr, 0, (sizeof(numChars_t)*numsSize));
    for(int i=0; i<numsSize; i++)
    {
        arr[i].val = i+1; 
    }
    
    for(int i=0; i<numsSize; i++)
    {
        arr[nums[i]-1].occurrences++; 
    }
    
    *returnSize = 2; 
    int *ret = (int *)malloc(sizeof(int)*(*returnSize));
    memset(ret, 0, (sizeof(int)*(*returnSize)));
    for(int i=0; i<numsSize; i++)
    {
        if(arr[i].occurrences == 0)
        {
            ret[1] = arr[i].val;
        }
        if(arr[i].occurrences == 2)
        {
            ret[0] = arr[i].val;
        }
    }
    
    free(arr);   
    return ret; 
}