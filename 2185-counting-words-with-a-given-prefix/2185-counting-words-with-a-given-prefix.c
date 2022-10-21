

int prefixCount(char ** words, int wordsSize, char * pref){

    int count = 0; 
    
    int prefixSize = strlen(pref);
    
    for (int i = 0; i < wordsSize; i++)
    {
        bool flag = false;
        for (int j = 0; j < prefixSize; j++)
        {
            if (strlen(words[i]) < prefixSize)
            {
                flag = true;
                continue;
            }
            if (words[i][j] != pref[j])
            {
                flag = true;
            }
        }
        if (!flag)
        {
            count++;
        }
    }
    
    return count; 
    
}