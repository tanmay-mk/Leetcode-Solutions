

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize){

    *returnSize = n;
    
    int *retArr = (int *)malloc(sizeof(int)*n);
    memset(retArr, 0, (sizeof(int)*n));
    
    if ((n & 1) != 0)
    {
        //n is odd
        n--;
    }
    
    int j = 1; 
    for (int i = 0; i<n/2; i++)
    {
        retArr[i] = j;
        retArr[n-i-1] = j*(-1);
        j++;
    }
    
    return retArr; 
    
}