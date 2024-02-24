int findClosestNumber(int* nums, int numsSize) {
    
    int closestDist = ((nums[0] < 0)? (nums[0] * (-1)): nums[0]);
    int closestElem = nums[0];
    
    for(int i=0; i<numsSize; i++)
    {        
        int distance = ((nums[i] < 0)? (nums[i] * (-1)): nums[i]);
        
        if (distance == closestDist)
        {
            if (nums[i] > closestElem)
            {
                closestElem = nums[i];
            }
        }
        
        if (distance < closestDist)
        {
            closestDist = distance;
            closestElem = nums[i];
        }
    }
    return closestElem; 
}