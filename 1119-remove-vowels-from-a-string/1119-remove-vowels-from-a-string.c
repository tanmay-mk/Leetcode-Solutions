
void rmv(char c, char * str)
{
    int length = strlen(str); 
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
}


char * removeVowels(char * s){

    rmv('a', s);
    rmv('e', s);
    rmv('i', s);
    rmv('o', s);
    rmv('u', s); 
    
    return s;
}