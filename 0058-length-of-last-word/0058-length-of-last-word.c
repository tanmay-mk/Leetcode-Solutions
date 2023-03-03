int lengthOfLastWord(char * s){

    int sLen = strlen(s);
    int wLen = 0; 
    
    while(s[sLen-1] == ' ')
    {
        sLen--;
    }
    
    for(int i=sLen-1; i>=0; i--)
    {
        if(s[i] != ' ')
        {
            wLen++;
        }
        else
        {
            break;
        }
    }
    return wLen; 
}