/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRigthDifference(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize; 
    int *leftsum = (int *)malloc(sizeof(int)*numsSize);
    int *rightsum = (int *)malloc(sizeof(int)*numsSize);
    int *arr = (int *)malloc(sizeof(int)*numsSize);
    memset(leftsum, 0, (sizeof(int)*numsSize));
    memset(rightsum, 0, (sizeof(int)*numsSize));
    memset(arr, 0, (sizeof(int)*numsSize));
    
    //find leftsum & rightsum
    for(int i = 0; i<numsSize; i++)
    {
        if(i == 0)
        {
            leftsum[i] = 0;
        }
        else
        {
            for(int j=i-1; j>=0; j--)
            {
                leftsum[i] += nums[j]; 
            }
        }
    }
    
    for(int i=0; i<numsSize; i++)
    {
        if(i == numsSize-1)
        {
            rightsum[i] = 0; 
        }
        for(int j=i+1; j<numsSize; j++)
        {
            rightsum[i] += nums[j]; 
        }
    }
    
    for(int i=0; i<numsSize; i++)
    {
        if(leftsum[i]>rightsum[i])
        {
            arr[i] = leftsum[i]-rightsum[i];
        }
        else
        {
            arr[i] = rightsum[i]-leftsum[i];
        }
    }
    
    free(rightsum);
    free(leftsum);
    return arr; 
}