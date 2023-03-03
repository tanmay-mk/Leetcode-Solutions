
void rmv(char c, char * str, int *len)
{
    int length = *len; 
    for(int i=0; i<length; i++)
    {
        if (str[i] == c)
        {
            for(int j=i; j<length; j++)
            {
                str[j] = str[j+1];
            }
            str[length-1] = '\0';
            length--; i--;
        }
    }
    *len = length; 
}


char * removeVowels(char * s){

    int len = strlen(s);
    
    for(int i=0; i<len; i++)
    {
        if (
                (s[i] == 'a') ||
                (s[i] == 'e') ||
                (s[i] == 'i') ||
                (s[i] == 'o') ||
                (s[i] == 'u')
            )
        {
            rmv(s[i], s, &len); 
            i--;
        }
    }
    return s;
}