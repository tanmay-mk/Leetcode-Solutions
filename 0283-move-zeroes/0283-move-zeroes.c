void moveZeroes(int* nums, int numsSize){

     int numZeroes = 0;

     for(int i=0; i<numsSize-numZeroes; i++)
     {
         if(nums[i] == 0)
         {
            for(int j=i; j<(numsSize-numZeroes-1); j++)
            {
                nums[j] = nums[j+1];
            }
            nums[numsSize-numZeroes-1] = 0;
            numZeroes++; i--;
         }
     }

}