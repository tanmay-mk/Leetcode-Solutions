bool areOccurrencesEqual(char * s){

    int alphabets[26] = {0}; 
    int sLen = strlen(s);
    
    for(int i=0; i<sLen; i++)
    {
        alphabets[s[i] - 'a']++; 
    }
    
    int occurrences = 0; 
    int idx = 0; 
    while(alphabets[idx] == 0)
    {
        idx++;
    }
    occurrences = alphabets[idx];
    for(int i=idx; i<26; i++)
    {
        if(alphabets[i] != 0)
        {
            if(alphabets[i] != occurrences)
            {
                return false; 
            }
        }
    }
    return true; 
}