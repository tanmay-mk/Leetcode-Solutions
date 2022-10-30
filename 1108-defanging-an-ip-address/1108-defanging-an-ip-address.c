

char * defangIPaddr(char * address){
    
    int addressSize = strlen(address);
    int defangSize = address+6;
    
    int i = 0, j = 0; 
    char *defanged = (char *)malloc(sizeof(char)*defangSize);
    memset(defanged, 0, (sizeof(char)*defangSize));
    
    for (int i = 0; i < addressSize; i++)
    {
        if (address[i] == '.')
        {
            defanged[j++] = '[';
            defanged[j++] = '.';
            defanged[j++] = ']';
        }
        else
        {
            defanged[j++] = address[i];
        }
    }
    
    return defanged;
}