int numberOfPoints(int** nums, int numsSize, int* numsColSize){

    int points[100] = {0};
    
    for(int i=0; i<numsSize; i++)
    {
        for(int j=nums[i][0]; j<=nums[i][1]; j++)
        {
            points[j-1]++;
        }
    }
    
    int count=0;
    for(int i=0; i<100; i++)
    {
        if (points[i] > 0)
        {
            count++;
        }
    }
    
    return count; 
}