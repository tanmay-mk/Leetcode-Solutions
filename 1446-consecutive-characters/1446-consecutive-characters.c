int maxPower(char* s) {
    
    int max = 1; 
    int cur = 1; 
    
    while(*s != '\0')
    {
        if (*(s+1) != '\0')
        {
            if (*s == *(s+1))
            {
                cur++;
            }
            else
            {
                if (cur > max)
                {
                    max = cur;
                }
                cur = 1; 
            }
        }
        s++;
    }
    
    if (cur > max)
    {
        max = cur;
    }
        
    return max; 
}