void deleteAndAppend(int *arr, int numsSize, int idx)
{
    int val = arr[idx]; 
    for(int i = idx; i<numsSize-1; i++)
    {
        arr[i] = arr[i+1]; 
    }
    arr[numsSize-1] = val; 
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize; 
    
    int *arr = (int *)malloc(sizeof(int)*numsSize);
    memcpy(arr, nums, (sizeof(int)*numsSize)); 
    
    int zeroes = 0; 
    for(int i=0; i<numsSize-1; i++)
    {
        if(arr[i] == 0)
        {
            zeroes++; 
        }
        if(arr[i] == arr[i+1])
        {
            arr[i] = (arr[i] << 1); 
            arr[i+1] = 0;
        }
    }
    
    for(int i=0; i<numsSize; i++)
    {
        if (arr[i] == 0)
        {
            deleteAndAppend(arr, numsSize, i); 
            zeroes--; 
            if ((i != 0) && (zeroes > 0))
            {
                i--;
            }
        }
    }
    
    return arr; 
}