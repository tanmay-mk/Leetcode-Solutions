char toLowercase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (char)(c+32); 
    }
    return c;
}

int countKeyChanges(char* s) {
    
    int changes = 0; 
    
    int sLen = strlen(s);

    char prevKey = toLowercase(s[0]); 
    
    for(int i=1; i<sLen; i++)
    {
        char thisKey = toLowercase(s[i]); 
        if (prevKey != thisKey)
        {
            changes++; 
        }
        prevKey = thisKey; 
    }
    
    return changes; 
}