

char * mergeAlternately(char * word1, char * word2){

    int w1Len = strlen(word1); 
    int w2Len = strlen(word2); 
    
    char *ans = (char *)malloc(sizeof(char) * (w1Len+w2Len+1));
    memset(ans, 0, (sizeof(char) * (w1Len+w2Len+1)));
    char *ret = ans; 
    
    while(*word1 != '\0' || *word2 != '\0')
    {
        if (*word1 != '\0')
        {
            *ans = *word1; 
            ans++; word1++;
        }
        
        if (*word2 != '\0')
        {
            *ans = *word2; 
            ans++; word2++;
        }
    }
    return ret;
}