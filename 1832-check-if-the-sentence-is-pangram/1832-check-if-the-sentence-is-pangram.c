bool checkIfPangram(char * sentence){

    int alphabetArr[26] = {0}; 
    
    int strLength = strlen(sentence);
    
    for(int i=0; i<strLength; i++)
    {
        int idx = sentence[i]-'a'; 
        alphabetArr[idx]++;
    }
    
    for(int i=0; i<26; i++)
    {
        if(alphabetArr[i] == 0)
        {
            return false;
        }
    }
    return true;
}