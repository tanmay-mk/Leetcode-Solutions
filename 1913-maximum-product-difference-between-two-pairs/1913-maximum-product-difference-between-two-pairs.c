int compare(int *a, int *b)
{
    return *a - *b;
}

int maxProductDifference(int* nums, int numsSize){

    qsort(nums, numsSize, sizeof(int), compare);
    
    int minProduct = nums[0]*nums[1];
    int maxProduct = nums[numsSize-1]*nums[numsSize-2];
    
    return (maxProduct-minProduct);    
}