int compare(char *a, char *b)
{
    return (int)(*a - *b);
}


bool checkString(char * s){
    int sLen = strlen(s);
    
    char copy[120] = {0};
    strcpy(copy, s);
    
    qsort(s, sLen, sizeof(char), compare);
    
    return (memcmp(s, copy, sLen)==0);
    
}