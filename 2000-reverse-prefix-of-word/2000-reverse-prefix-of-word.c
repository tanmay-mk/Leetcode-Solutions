char * reversePrefix(char * word, char ch){

    int len = strlen(word);
    
    int idx=0; bool found = false; 
    for(int i=0; i<len; i++)
    {
        if(word[i] == ch)
        {
            found = true; 
            break; 
        }
        idx++; 
    }
    
    if(found == false)
    {
        return word;
    }
    
    idx++;
    for(int i=0; i<idx/2; i++)
    {
        word[i] ^= word[idx-i-1]; 
        word[idx-i-1] ^= word[i]; 
        word[i] ^= word[idx-i-1]; 
    }
    return word;
}