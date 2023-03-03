void shiftStr(char *str, int len)
{
    char temp = str[0]; 
    
    for(int i=0; i<len-1; i++)
    {
        str[i] = str[i+1]; 
    }
    str[len-1] = temp;
    return; 
}

bool rotateString(char * s, char * goal){

    int sLen = strlen(s);
    int gLen = strlen(goal);
    
    if(sLen != gLen)
    {
        return false;
    }
    
    for(int i=0; i<sLen; i++)
    {
        shiftStr(s, sLen);
        if(strcmp(s, goal) == 0)
        {
            return true; 
        }
    }
    return false; 
}