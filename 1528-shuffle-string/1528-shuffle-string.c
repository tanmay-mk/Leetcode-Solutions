char * restoreString(char * s, int* indices, int indicesSize){

    int retStrSize = indicesSize+1;
    char *retStr = (char *)malloc(sizeof(char)*retStrSize);
    memset(retStr, 0, (sizeof(char)*retStrSize));
    
    for(int i = 0; i<indicesSize; i++)
    {
        int idx = indices[i];
        retStr[idx] = s[i];
    }
    
    return retStr; 
}