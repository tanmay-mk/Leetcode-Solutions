int smallestEqual(int* nums, int numsSize){

    int j=0;
    for (int i = 0; i<numsSize; i++)
    {
        if ((nums[i]%10)==j)
        {
            return i;
        }
        j++;
        if(j > 9)
        {
            j = 0;
        }
    }
    return -1; 
}