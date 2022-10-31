
int *bubbleSort(int *arr, int nums)
{
    for(int i=0; i<nums-1; i++)
    {
        for (int j = 0; j < nums - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];                
            }
        }
    }
    return arr;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize){

    nums = bubbleSort(nums, numsSize);
    int count=0;
    for (int i=0; i<numsSize; i++)
    {
        if(nums[i] == target)
        {
            count++;
        }
    }
    
    int *retArr = (int *)malloc(sizeof(int)*count);
    memset(retArr, 0, (sizeof(int)*count));
    *returnSize = count;
    int j = 0;
    for (int i=0; i<numsSize; i++)
    {
        if(nums[i] == target)
        {
            retArr[j++] = i;
        }
    }
    return retArr; 
}