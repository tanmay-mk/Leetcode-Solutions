int percentageLetter(char * s, char letter){

    int length = strlen(s);
    int occurrences = 0; 
    
    for(int i=0; i<length; i++)
    {
        if(s[i] == letter)
        {
            occurrences++;
        }
    }
    
    return ((occurrences*100)/length);
}