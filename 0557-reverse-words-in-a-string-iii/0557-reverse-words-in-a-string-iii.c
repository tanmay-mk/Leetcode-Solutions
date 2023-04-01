void rev(char *str, int start, int end)
{
    while(start < end)
    {
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];
        start++; end--; 
    }
}

char * reverseWords(char * s){
    int start=0, end; 
    
    int len = strlen(s);
    
    for(int i=0; i<len; i++)
    {
        if(s[i] == ' ')
        {
            end = i-1; 
            rev(s, start, end);
            start = i+1; 
        }
    }
    end = len-1; 
    rev(s, start, end);
    
    return s; 
}