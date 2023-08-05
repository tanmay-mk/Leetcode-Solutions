int sumOfSquares(int* nums, int numsSize){

    int SquareSum=0;
    
    for(int i=0; i<numsSize; i++)
    {
        if ((numsSize % (i+1)) == 0)
        {
            SquareSum += (nums[i] * nums[i]);
        }
    }
    
    return SquareSum;
}