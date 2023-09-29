int CountSetBits(int n)
{
    int count=0; 
    while(n > 0)
    {
        if (n & 1)
        {
            count++; 
        }
        n = n >> 1; 
    }
    return count; 
}

int sumIndicesWithKSetBits(int* nums, int numsSize, int k){

    int sum = 0; 
    for(int i=0; i<numsSize; i++)
    {
        int a; 
        if(a = CountSetBits(i) == k)
        {
            sum += nums[i];
        }
    }
    return sum;
}