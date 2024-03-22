bool isMonotonic(int* nums, int numsSize) {
    
    if (numsSize <= 2)
    {
        return true;
    }
    
    //skip same elements in the beginning
    int idx = 0;
    
    while(nums[idx] == nums[idx+1])
    {
        idx++; 
        if(idx == numsSize-1)
        {
            return true; 
        }
    }
    
    const bool increasing = (nums[idx] < nums[idx+1])? true : false; 
    idx++; 
    
    for(int i=idx; i<numsSize-1; i++)
    {
        switch(increasing)
        {
            case true:
                //greater than or equal is ok
                if (nums[i+1] < nums[i])
                {
                    return false; 
                }
            break;
                
            case false: 
                //less than or equal is ok
                if (nums[i+1] > nums[i])
                {
                    return false; 
                }
            break;
        }
    }
    return true;
}