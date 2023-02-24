char * freqAlphabets(char * s){

    
    int idx = 0;

    int sLen = strlen(s);    
    
    char *arr = (char *)malloc(sizeof(char)*sLen);
    memset(arr, 0, (sizeof(char)*sLen));
    
    for(int i=0; i<sLen; i++)
    {
        if(s[i] == '#')
        {
            int num = (((s[i-2]-'0')*10)+(s[i-1]-'0'));
            idx -= 2;
            arr[idx++] = 'a'+ num - 1; 
        }
        else
        {
            int ch = s[i] - '0';
            arr[idx++] = 'a'+ ch - 1; 
        }
    }
    arr[idx++] = '\0';
    
    strcpy(s, arr);
    free(arr);
    
    return s; 
}