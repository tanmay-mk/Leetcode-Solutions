bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size){

    char firstWord[1000] = {0};
    char secondWord[1000] = {0};
    
    int firstIdx = 0, secondIdx = 0; 
    for(int i=0; i<word1Size; i++)
    {
        int len = strlen(word1[i]);
        for(int j=0; j < len; j++)
        {
            firstWord[firstIdx++] = word1[i][j];
        }
    }
    
    for(int i=0; i<word2Size; i++)
    {
        int len = strlen(word2[i]);
        for(int j=0; j < len; j++)
        {
            secondWord[secondIdx++] = word2[i][j];
        }
    }
    
    if (firstIdx == secondIdx)
    {
        return (memcmp(firstWord, secondWord, firstIdx)==0);
    }
    return false; 
}