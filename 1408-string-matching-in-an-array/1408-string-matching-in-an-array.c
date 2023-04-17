/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** stringMatching(char ** words, int wordsSize, int* returnSize){

    int numWords = 0; 
    char **arr = (char **)malloc(sizeof(char *)*numWords);
    int idx = 0; 
    
    for(int i=0; i<wordsSize; i++)
    {
        int thislen = strlen(words[i]); //get length of word to be compared
        for(int j=0; j<wordsSize; j++)
        {
            if(i != j)      //do not compare same word to each other
            {   
                int len = strlen(words[j]); //get length of word which we want to compare with
                if(thislen <= len)          //only compare if length of words[i] < words[j]
                {
                    for(int k=0; k<=(len-thislen); k++) //start comparing
                    {
                        bool flag = false; //flag to see if sub-array already exists in array to be returned
                        if(memcmp(&words[j][k], words[i], thislen) == 0)    //check for substring
                        {
                            //substring found
                            for(int l=0; l<idx; l++)
                            {
                                //see if substring already added
                                if(strcmp(words[i], arr[l])==0)
                                {
                                    //string already added, set flag
                                    flag = true; 
                                    break; 
                                }
                            }
                            if(flag == false)   //unique substring found
                            {
                                numWords++;     //increment number of words
                                //allocate memory
                                arr = (char **)realloc(arr, sizeof(char *)*numWords);
                                arr[idx] = (char *)malloc(sizeof(char)*30);
                                //add it to array
                                strcpy(arr[idx], words[i]); 
                                //update index
                                idx++;
                                //break the loop
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