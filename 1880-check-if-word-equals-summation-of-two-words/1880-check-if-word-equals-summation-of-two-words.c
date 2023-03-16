bool isSumEqual(char * firstWord, char * secondWord, char * targetWord){

    int fLen = strlen(firstWord);
    int sLen = strlen(secondWord);
    int tLen = strlen(targetWord);
    
    int fVal=0, sVal=0, tVal=0; 
    
    for(int i=0; i<fLen; i++)
    {
        fVal = (fVal*10) + (firstWord[i] - 'a'); 
    }
    
    for(int i=0; i<sLen; i++)
    {
        sVal = (sVal*10) + (secondWord[i] - 'a'); 
    }
    
    for(int i=0; i<tLen; i++)
    {
        tVal = (tVal*10) + (targetWord[i] - 'a'); 
    }
    
    if ((fVal + sVal)==tVal)
    {
        return true;
    }
    return false;
}