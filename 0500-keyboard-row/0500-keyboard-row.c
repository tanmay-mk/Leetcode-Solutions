int getRowforKey(char c)
{
    int row = 0; 
    
    switch(c)
    {
        case 'q': case 'w': case 'e': case 'r': case 't': case 'y': case 'u': case 'i': case 'o': case 'p':
        case 'Q': case 'W': case 'E': case 'R': case 'T': case 'Y': case 'U': case 'I': case 'O': case 'P':
            row = 1; 
        break; 
    
        case 'a': case 's': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l':
        case 'A': case 'S': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K': case 'L':
            row = 2; 
        break; 
            
        case 'z': case 'x': case 'c': case 'v': case 'b': case 'n': case 'm':
        case 'Z': case 'X': case 'C': case 'V': case 'B': case 'N': case 'M':
            row = 3; 
        break; 
    }
    return row; 
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findWords(char ** words, int wordsSize, int* returnSize){

    int numWords = 0; int idx = 0;
    int thisWordRow = 0;
    char **arr = (char **)malloc(sizeof(char *)*numWords); 
    
    for(int i=0; i<wordsSize; i++)
    {
        bool rowMismatch = false; 
        thisWordRow = getRowforKey(words[i][0]); 
        int len = strlen(words[i]); 
        
        for(int j=0; j<len; j++)
        {
            if(getRowforKey(words[i][j]) != thisWordRow)
            {
                rowMismatch = true; 
                break; 
            }
        }
        
        if(rowMismatch == false)
        {
            numWords++; 
            arr = (char **)realloc(arr, sizeof(char *)*numWords);
            arr[idx] = (char *)malloc(sizeof(char) * len+1); 
            strcpy(arr[idx], words[i]);
            idx++;
        }
        
    }
    *returnSize = numWords; 
    return arr; 
}