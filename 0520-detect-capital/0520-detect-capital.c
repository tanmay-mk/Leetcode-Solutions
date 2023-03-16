bool detectCapitalUse(char * word){
    
    int wLen = strlen(word);
    
    bool first = false; 
    int count = 0; 
    
    for(int i=0; i<wLen; i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            count++;
            if(i==0)
            {
                first = true;  
            }
        }
    }
    
    if(count == 1 && first == true)
    {
        return true; 
    }
    else if(count == wLen)
    {
        return true; 
    }
    else if(count == 0)
    {
        return true; 
    }
    return false; 
}