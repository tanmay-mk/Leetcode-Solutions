int compare(int *a, int *b)
{
    return *a - *b; 
}

int maximizeSum(int* nums, int numsSize, int k){

    qsort(nums, numsSize, sizeof(int), compare);
    
    int sum = nums[numsSize-1]; 
    for(int i=1; i<k; i++)
    {
        nums[numsSize-1]++;
        sum += nums[numsSize-1];
    }
    return sum;   
}