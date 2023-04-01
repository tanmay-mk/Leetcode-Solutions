int search(int* nums, int numsSize, int target){

    int low = 0, high = (numsSize-1); 
    
    while ((high - low) > 1)
    {
        int mid = ((high+low) >> 1); 
        if(nums[mid] < target)
        {
            low = mid+1; 
        }
        else
        {
            high = mid; 
        }
    }
    
    if(nums[low] == target)
    {
        return low; 
    }
    else if(nums[high] == target)
    {
        return high;
    }
    
    return -1; 
}