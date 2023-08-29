bool isAcronym(char ** words, int wordsSize, char * s){
    
    if(strlen(s) != wordsSize)
    {
        return false; 
    }
    for(int i=0; i<wordsSize; i++)
    {
        
        if (words[i][0] != s[i])
        {
            return false; 
        }
    }
    return true;     
}