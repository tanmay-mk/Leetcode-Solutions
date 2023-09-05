/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize){

   *returnSize  = 2; 
    int *arr = (int *)malloc(sizeof(int)*2);
    
    int even = 0, odd = 0; 
    bool isEven = true;  
    
    while(n > 0)
    {
        if (isEven == true)
        {
            if ((n & 1) != 0)
            {
                even++;
            }
            isEven = false;
        }
        else
        {
            if ((n & 1) != 0)
            {
                odd++;
            }
            isEven = true;
        }
        n = (n >> 1);
    }
    
    arr[0] = even; 
    arr[1] = odd;
    return arr; 
}