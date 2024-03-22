int compare(int *a, int *b)
{
    return (*a - *b);
}

int minOperations(int* nums, int numsSize, int k) {
    
    //sort the array
    qsort(nums, numsSize, sizeof(int), compare); 
    
    //find first element greater than or equal to k
    for(int i=0; i<numsSize; i++)
    {
        if (nums[i] >= k)
        {
            return i; 
        }
    }
    
    return 0;
}