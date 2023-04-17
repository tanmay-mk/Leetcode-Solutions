/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** stringMatching(char ** words, int wordsSize, int* returnSize){

    int numWords = 0; 
    char **arr = (char **)malloc(sizeof(char *)*numWords);
    int idx = 0; 
    
    for(int i=0; i<wordsSize; i++)
    {
        int thislen = strlen(words[i]);
        for(int j=0; j<wordsSize; j++)
        {
            if(i != j)
            {
                int len = strlen(words[j]); 
                if(thislen <= len)
                {
                    for(int k=0; k<=(len-thislen); k++)
                    {
                        bool flag = false; 
                        if(memcmp(&words[j][k], words[i], thislen) == 0)
                        {
                            for(int l=0; l<idx; l++)
                            {
                                if(strcmp(words[i], arr[l])==0)
                                {
                                    flag = true; 
                                    break; 
                                }
                            }
                            if(flag == false)
                            {
                                numWords++; 
                                arr = (char **)realloc(arr, sizeof(char *)*numWords);
                                arr[idx] = (char *)malloc(sizeof(char)*30);
                                strcpy(arr[idx], words[i]);
                                idx++;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    *returnSize = numWords; 
    return arr; 
}