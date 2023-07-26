int findMaxIdx(int *arr, int arrSize)
{
    int max = arr[0]; 
    int maxIdx = 0;
    
    for(int i=0; i<arrSize; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i]; 
            maxIdx = i;
        }
    }
    
    return maxIdx; 
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findRelativeRanks(int* score, int scoreSize, int* returnSize){

    *returnSize = scoreSize;
    char **ranks = (char **)malloc(sizeof(char *)*scoreSize);
    for(int i=0; i<scoreSize; i++)
    {
        ranks[i] = (char *)malloc(sizeof(char)*15);
        memset(ranks[i], 0, (sizeof(char)*15));
    }
    
    int rankCtr = 1; 
    for(int i=0; i<scoreSize; i++)
    {
        int maxIdx = findMaxIdx(score, scoreSize);
        switch(i)
        {
            case 0:
                sprintf(ranks[maxIdx], "Gold Medal");
            break; 
                
            case 1: 
                sprintf(ranks[maxIdx], "Silver Medal");            
            break; 
                
            case 2: 
                sprintf(ranks[maxIdx], "Bronze Medal");
            break; 
                
            default: 
                sprintf(ranks[maxIdx], "%d", rankCtr);
            break; 
        }
        score[maxIdx] = -1; 
        rankCtr++;
        
    }
    
    return ranks; 
}