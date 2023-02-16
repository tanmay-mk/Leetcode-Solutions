bool hasZeroes(int num)
{
    while (num > 0)
    {
        int rem = num % 10;
        if (rem == 0)
        {
            return true; 
        }
        num = num/10;
    }
    return false; 
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getNoZeroIntegers(int n, int* returnSize){

    *returnSize = 2; 
    
    int numsSize = 2;
    int *arr = (int*)malloc(sizeof(int)*numsSize);
    memset(arr, 0, (sizeof(int)*numsSize));
    
    for(int i=1; i<=n/2; i++)
    {
        arr[0] = i;
        arr[1] = n-i; 
        if(hasZeroes(arr[0]) == false && hasZeroes(arr[1])==false)
        {
            break;
        }
    }
    
    return arr; 
}