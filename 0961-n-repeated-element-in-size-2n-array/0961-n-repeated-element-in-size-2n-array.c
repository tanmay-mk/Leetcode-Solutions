int compare(int *a, int *b)
{
    return *a - *b; 
}

int repeatedNTimes(int* nums, int numsSize){
    
    qsort(nums, numsSize, sizeof(int), compare); 
    
    int this_count = 1;
    
    int n = (numsSize >> 1); 
    
    for(int i=0; i<numsSize-1; i++)
    {
        if(nums[i] == nums[i+1])
        {
            this_count++;
            if(this_count == n)
            {
                return nums[i]; 
            }
        }
        else
        {
            this_count = 1; 
        }
    }
    return 0; 
}