/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){

    /*determine size of array to be returned*/
    *returnSize = numsSize; 
    
    /*initialize dynamically allocated array*/
    int *arr = (int *)malloc(sizeof(int)*numsSize);  
    memset(arr, 0,sizeof(int)*numsSize);

    arr[0] = nums[0];
    for (int i = 1; i<numsSize; i++)
    {
        int sum = 0;
        for (int j = 0; j<=i; j++)
        {
            sum += nums[j];   
        }
        arr[i] = sum;
    }
    
    return arr; 
    
}