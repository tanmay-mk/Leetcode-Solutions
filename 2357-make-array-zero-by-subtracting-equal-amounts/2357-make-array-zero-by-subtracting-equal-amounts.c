int compare(int *a, int *b)
{
    return (*a - *b);
}

int minimumOperations(int* nums, int numsSize){

    const int dummy[100] = {0}; 
    
    int count = 0; int i;
    int min; 
    
    while(memcmp(nums, dummy, (sizeof(int)*numsSize)) != 0)
    {
        count++; 
        qsort(nums, numsSize, sizeof(int), compare);
        i = 0; 
        while(nums[i] == 0)
        {
            i++;
        }
        min = nums[i]; 
        for(int k = i; k<numsSize; k++)
        {
            nums[k] -= min;
        }
    }
    return count; 
}