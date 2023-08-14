/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** splitWordsBySeparator(char ** words, int wordsSize, char separator, int* returnSize){

    *returnSize = 0; 
    
    char **argv = (char **)malloc(sizeof(char *)*500);
    for(int i=0; i<500; i++)
    {
        argv[i] = (char *)malloc(sizeof(char)*21);
        memset(argv[i], 0, (sizeof(char)*21));
    }
    
    int argc = 0; 
    for(int i=0; i<wordsSize; i++)
    {
        int len = strlen(words[i]);
        char *p = words[i];
        bool token = false; 
        for(int j=0; j<len; j++)
        {
            switch(token)
            {
                case false: 
                   if (*p != separator)
                   {
                       argv[argc] = p;
                       argc++;
                       token = true; 
                   }
                break; 
                
                case true: 
                    if (separator == *p)
                    {
                        *p = '\0';
                        token = false; 
                    }
                break; 
            }
            p++; 
        }
    }
    
    
    *returnSize = argc; 
    return argv; 
}