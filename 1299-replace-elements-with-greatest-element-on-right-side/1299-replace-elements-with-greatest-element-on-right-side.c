

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize){
    *returnSize = arrSize; 
    int *retArr = (int *)malloc(sizeof(int)*arrSize);
    memset(retArr, -1, (sizeof(int)*arrSize));
    
    for (int i=0; i<arrSize; i++)
    {
        int max = -1; 
        for (int j=i+1; j<arrSize; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }
        retArr[i] = max;
    }
    return retArr; 
}