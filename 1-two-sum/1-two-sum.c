

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int i=0, j=0; 
    *returnSize = 2;
    
    int* retArray = (int*)malloc(sizeof(int)*2);
    
    for(i = 0; i<numsSize-1; i++)
    {
        for (j = i+1; j<numsSize; j++)
        {
            if (i == j)
            {
                continue;
            }
            
            if((nums[i]+nums[j])==target)
            {
                retArray[0] = i;
                retArray[1] = j;
                return retArray;;
            }
        }
    }
    
    retArray[0] = -1;
    retArray[1] = -1;
    
    return retArray;
}