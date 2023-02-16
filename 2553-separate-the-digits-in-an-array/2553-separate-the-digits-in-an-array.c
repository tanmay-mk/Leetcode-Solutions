
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
    
    //when we separate digits from a number, the digits come off in reverse order
    //in that way, we will have to reverse the array every time we separate digits from the number
    
    //instead, we will traverse the array in reverse direction
    //separating digits in reverse direction, so we don't have to constantly reverse the array
    //after processing each number
    //we will reverse the entire return array at once at the end
    
    int retSize = numDigits(nums[numsSize-1]); //find number of digits for last number in array
    int *arr = (int *)malloc(sizeof(int)*retSize);  //allocate memory
    int idx = 0; //global idx to fill in return array
    
    //fill in digits of last number
    while(nums[numsSize-1]>0)
    {
        int rem = nums[numsSize-1]%10;
        arr[idx++] = rem; 
        nums[numsSize-1] /= 10; 
    }
    
    for(int i=numsSize-2; i>=0; i--)
    {
        //compute new size of returned array
        retSize = retSize + numDigits(nums[i]); 
        //reallocate memory
        arr = (int *)realloc(arr, retSize*sizeof(int));
        //separate & store digits
        while(nums[i]>0)
        {
            int rem = nums[i]%10;
            arr[idx++] = rem; 
            nums[i] /= 10; 
        }
    }
    //update return size
    *returnSize = retSize; 
    
    //reverse the array
    for(int i=0; i<retSize/2; i++)
    {
        arr[i] ^= arr[retSize - i - 1];
        arr[retSize - i - 1] ^= arr[i];
        arr[i] ^= arr[retSize - i - 1];
    }

    return arr; 
}