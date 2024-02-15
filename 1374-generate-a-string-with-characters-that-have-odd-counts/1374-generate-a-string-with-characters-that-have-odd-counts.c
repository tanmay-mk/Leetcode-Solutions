char* generateTheString(int n) {
    
    char *out = (char *)malloc(sizeof(char)*(n+1));
    memset(out, 0, (sizeof(char)*(n+1)));
    
    for(int i=0; i<(n-1); i++)
    {
        out[i] = 'a'; 
    }
    
    if (n & 1)
    {
        out[n-1] = 'a'; 
    }
    else
    {
        out[n-1] = 'b'; 
    }
    
    return out; 
}