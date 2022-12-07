int arraySign(int* nums, int numsSize){

    int n = 0;
    for(int i = 0; i<numsSize; i++)
    {
        if(nums[i]<0)
        {
            n++;
        }
        else if(nums[i] == 0)
        {
            return 0;
        }
    }
        if(n%2 == 0)
        {
            return 1;
        }

      return -1;
}