

char * toHex(int num){
    
    char *retStr = (char *) malloc(sizeof(char)*9);
    memset(retStr, 0, 9);
    
    uint32_t tempNum = num; 
    int rem = 0; 
    
    if (num == 0)
    {
        return "0";
    }
    
    int i; 
    for(i = 0; tempNum > 0; i++)
    {
        rem = (tempNum % 16);
        if (rem < 10)
        {
            retStr[i] = '0' + rem;
        }
        else
        {
            rem -= 10; 
            retStr[i] = 'a' + rem;
        }
        tempNum = tempNum >> 4; //equivalent to division by 16
    }
    
    for (int j = 0; j < i/2; j++)
    {
        retStr[j] ^= retStr[i-j-1];
        retStr[i-j-1] ^= retStr[j];
        retStr[j] ^= retStr[i-j-1];
    }
    
    return retStr; 

}