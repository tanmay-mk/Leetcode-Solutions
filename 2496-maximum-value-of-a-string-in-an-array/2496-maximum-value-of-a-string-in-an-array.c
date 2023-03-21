int findmax(int *arr, int arrsize)
{
    int max = arr[0]; 
    for(int i=1; i<arrsize; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max; 
}

int maximumValue(char ** strs, int strsSize){
    
    int *vals = (int *)malloc(sizeof(int)*strsSize);
    memset(vals, 0, (sizeof(int)*strsSize)); 
        
    bool alpha = false;
    
    for(int i=0; i<strsSize; i++)
    {
        alpha = false; 
        int len=strlen(strs[i]);
        for(int j=0; j<len; j++)
        {
            if(strs[i][j] >= 'a' && strs[i][j] <= 'z')
            {
                alpha = true; 
                break; 
            }
        }
        if(alpha == true)
        {
            vals[i] = len; 
        }
        else
        {
            vals[i] = atoi(strs[i]);
        }
        //printf("vals[%d] = %d\n", i, vals[i]);
    }
    
    int max = findmax(vals, strsSize);
    free(vals);
    return max; 
}