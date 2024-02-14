int largestAltitude(int* gain, int gainSize) 
{
    int *ans = (int *)malloc((gainSize+1) * (sizeof(int)));
    memset(ans, 0, ((gainSize+1) * (sizeof(int))));
    int maximum = 0; 

    ans[0] = 0;
    
    for (int i = 1; i < (gainSize+1); i++)
    {
         for (int j = 0; j <= (i-1) ; j++)
         {
             ans[i] += gain[j];
         } 
    }
    

    for (int k =0; k < (gainSize+1); k++)
    {
        if(ans[0] < ans[k])
        {
            ans[0] = ans[k];
        }
    }
    
    maximum = ans[0];
    
    free(ans);
    
    return maximum;
}