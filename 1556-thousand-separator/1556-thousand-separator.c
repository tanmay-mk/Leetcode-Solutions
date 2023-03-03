char * thousandSeparator(int n){

    if (n == 0)
    {
        return "0";
    }
    
    int len = 0; 
    
    char *str = (char *)malloc(sizeof(char)*len);
    memset(str, 0, (sizeof(char)*len));
    int idx = 0; 
    int count = 0; 
    bool flag = false; 
    
    while(n > 0)
    {
        if(count == 3)
        {
            len++;
            count = 0; 
            flag = true; 
        }
        len++; 
        int rem = n % 10; 
        str = (char *)realloc(str, sizeof(char)*len); 
        if (flag)
        {
            flag = false;
            str[idx++] = '.'; 
        }
        str[idx++] = rem + '0'; 
        n /= 10;
        count++; 
    }
    len++; 
    str = (char *)realloc(str, sizeof(char)*len);
    str[idx] = '\0';
    
    for(int i=0; i<idx/2; i++)
    {
        str[i] ^= str[idx-i-1];
        str[idx-i-1] ^= str[i];
        str[i] ^= str[idx-i-1];
    }
    
    
    return str;    
}