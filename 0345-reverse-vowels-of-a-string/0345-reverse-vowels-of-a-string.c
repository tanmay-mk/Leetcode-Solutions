bool IS_VOWEL(char c)
{
    switch (c)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true; 
        break; 
    }
    return false; 
}

void swap(char *s, int i, int j)
{
    s[i] ^= s[j];
    s[j] ^= s[i];
    s[i] ^= s[j];
}

char * reverseVowels(char * s){
    
    int len = strlen(s);
    bool dont = false; 
    int i=0, j=len-1; 
    while(i < j)
    {
        while(!IS_VOWEL(s[i]))
        {
            i++;
            if(i >= j)
            {
                dont = true; 
                break; 
            }
        }
        while(!IS_VOWEL(s[j]))
        {
            j--;
            if(j <= i)
            {
                dont = true; 
                break; 
            }
        }
        if(!dont)
        {
            swap(s, i, j);
        }
        i++; j--; 
    }
    return s;
}