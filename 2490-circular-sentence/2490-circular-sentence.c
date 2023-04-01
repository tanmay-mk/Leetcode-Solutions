bool isCircularSentence(char * sentence){

    int len = strlen(sentence);
    
    for(int i=0; i<len; i++)
    {
        if(sentence[i] == ' ')
        {
            if(sentence[i-1] != sentence[i+1])
            {
                return false; 
            }
        }
    }
    
    if(sentence[len-1] != sentence[0])
    {
        return false; 
    }
    
    return true; 
}