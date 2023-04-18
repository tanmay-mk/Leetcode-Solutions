/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize){

    *returnSize = 2; 
    int *arr = (int *)malloc(sizeof(int)*(*returnSize));
    memset(arr, 0, (sizeof(int)*(*returnSize))); 
    
    int even = 0, odd = 0; 
    int idx = 0; 
    while(n > 0)
    {
        if((n & 1) == 1)
        {
            if((idx & 1) == 0)
            {
                even++; 
            }
            else
            {
                odd++;
            }
        }
        idx++;
        n = (n >> 1); 
    }
    
   arr[0] = even;
   arr[1] = odd;
   return arr;
}