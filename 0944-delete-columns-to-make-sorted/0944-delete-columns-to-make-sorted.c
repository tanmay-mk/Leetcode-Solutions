int minDeletionSize(char ** strs, int strsSize){

    int count = 0;  
    //all strings are of same length
    int len = strlen(strs[0]); 
    
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<strsSize-1; j++)
        {
            if(strs[j][i] > strs[j+1][i])
            {
                count++; 
                break; 
            }
        }
    }
    return count; 
}