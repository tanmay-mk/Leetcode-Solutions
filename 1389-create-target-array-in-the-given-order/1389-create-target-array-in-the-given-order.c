/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){

    *returnSize = numsSize; 
    
    int *retArr = (int *)malloc(sizeof(int)*numsSize);
    memset(retArr, -1, (sizeof(int)*numsSize));
    
    for(int i=0; i<numsSize; i++)
    {
        int num = nums[i];
        int idx = index[i];
        
        if(retArr[idx] != -1)
        {
            for(int j=numsSize-1; j>=idx; j--)
            {
                if (j!=0)
                {
                    retArr[j] = retArr[j-1];
                }
            }
        }
        retArr[idx] = nums[i];
        

    }
    return retArr; 
}