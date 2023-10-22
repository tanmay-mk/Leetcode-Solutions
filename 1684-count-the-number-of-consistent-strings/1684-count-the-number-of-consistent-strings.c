

int countConsistentStrings(char * allowed, char ** words, int wordsSize){

    int letters[26] = {0};
    int aLen = strlen(allowed);
    for(int i=0; i<aLen; i++)
    {
        letters[allowed[i]-'a']++;
    }
    
    int count = 0;
    
    for(int i=0; i<wordsSize; i++)
    {
        bool consistent = true; 
        int thisWordLen = strlen(words[i]);
        for(int j=0; j<thisWordLen; j++)
        {
            if(letters[words[i][j] - 'a'] == 0)
            {
                consistent = false; 
                break; 
            }
        }
        
        if (consistent)
        {
            count++;
        }
    }
    
    return count;
}