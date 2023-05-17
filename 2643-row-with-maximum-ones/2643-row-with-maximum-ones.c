int numOnes(int *arr, int arrSize)
{
    int count = 0; 
    
    for(int i=0; i<arrSize; i++)
    {
        if(arr[i] == 1)
        {
            count++; 
        }
    }
    return count; 
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rowAndMaximumOnes(int** mat, int matSize, int* matColSize, int* returnSize){

    int row = 0, maxOnes = 0; 
    
    int rows = matSize; 
    int cols = *matColSize; 
    *returnSize = 2; 
    
    for(int i=0; i<rows; i++)
    {
        int ones = numOnes(mat[i], cols); 
        if(ones > maxOnes)
        {
            row = i; 
            maxOnes = ones; 
        }
    }
    int *arr = (int *)malloc(sizeof(int)*2);
    
    arr[0] = row; 
    arr[1] = maxOnes; 
    
    return arr; 
}