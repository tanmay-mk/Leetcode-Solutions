void RemoveChar(char *s, int pos, int *sLen)
{
    for(int i=pos; i< *sLen; i++)
    {
        s[i] = s[i+1];
    }
    s[*sLen-1] = '\0';
    *sLen--;
}
char * finalString(char * s){

    int len = strlen(s);
    
    for(int i=0; i<len; i++)
    {
        if(s[i] == 'i')
        {
            RemoveChar(s,i,&len);
            for(int j=0; j<i/2; j++)
            {
                s[j] ^= s[i-j-1];
                s[i-j-1] ^= s[j];
                s[j] ^= s[i-j-1]; 
            }
            i--;
        }
    }
    return s;
}