
int numDigits(int num)
{
    int count = 0; 
    while(num > 0)
    {
        count++;
        num /= 10;
    }
    return count; 
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize){
    
    //we will go in reverse direction, so we don't have to constantly reverse the final array
    //we will reverse the entire return array at once at the end
    
    int retSize = numDigits(nums[numsSize-1]); //find number of digits for last number in array
    int *arr = (int *)malloc(sizeof(int)*retSize);  //allocate memory
    
    int idx = 0; //global idx to fill in return array
    
    
    while(nums[numsSize-1]>0)
    {
        int rem = nums[numsSize-1]%10;
        arr[idx++] = rem; 
        nums[numsSize-1] /= 10; 
    }
    
    for(int i=numsSize-2; i>=0; i--)
    {
        retSize = retSize + numDigits(nums[i]); 
        arr = (int *) realloc(arr, retSize*sizeof(int));
        while(nums[i]>0)
        {
            int rem = nums[i]%10;
            arr[idx++] = rem; 
            nums[i] /= 10; 
        }
    }

    *returnSize = retSize; 
    
    //reverse
    for(int i=0; i<retSize/2; i++)
    {
        arr[i] ^= arr[retSize - i - 1];
        arr[retSize - i - 1] ^= arr[i];
        arr[i] ^= arr[retSize - i - 1];
    }

    return arr; 
}