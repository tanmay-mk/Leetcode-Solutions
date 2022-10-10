


int countSetBits(uint32_t num)
{
    int count = 0; 
    for (int i = 0; i < 31; i++)
    {
        if ((num & (1 << i)) != 0)
        {
            count++;
        }
    }
    return count;
}



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    
    /*determine size of array*/
    *returnSize = n+1;
    int arrSize = n+1;
    
    int *arr = (int *)malloc(sizeof(int)*arrSize);
    memset(arr, 0, arrSize);
    
    for (int i = 0; i < arrSize; i++)
    {
        int setBits = countSetBits(i);
        arr[i] = setBits;
    }
    
    return arr; 
}