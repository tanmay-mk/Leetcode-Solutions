bool kLengthApart(int* nums, int numsSize, int k) {
    
    if (numsSize == 1)
    {
        return true;
    }
    
    int idx = 0; 
    int prev = 0, curr = 0; 
    
    //skip all leading zeroes
    while(nums[idx] == 0)
    {
        idx++;
        if (idx >= numsSize)
        {
            return true;
        }
    }
    
    //first 1
    prev = idx++; 
    while(idx < numsSize)
    {
        if (nums[idx] == 1)
        {
            if ((idx - prev - 1) < k)
            {
                return false;
            }
            prev = idx; 
        }
        idx++;
    }
    return true; 
}