/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** divideString(char * s, int k, char fill, int* returnSize){

    int sLen = strlen(s);
    int arrSize = (sLen % k == 0)? (sLen/k):((sLen/k)+1);
    int wordSize = k+1; 
    
    char **arr = (char **)malloc(sizeof(char*)*arrSize);
    for(int i=0; i<arrSize; i++)
    {
        arr[i] = (char *)malloc(sizeof(char)*wordSize);
        memset(arr[i], 0, (sizeof(char)*wordSize)); 
    }
    
    int idx = 0; 
    int count = 0; 
    for(int i=0; i<sLen; i++)
    {
        arr[idx][count++] = s[i];
        if ((count == k) && (i != (sLen - 1)))
        {
            count = 0; 
            idx++; 
        }
    }
    
    while(count < k)
    {
        arr[idx][count++] = fill; 
    }
    
    *returnSize = arrSize; 
    return arr; 
}