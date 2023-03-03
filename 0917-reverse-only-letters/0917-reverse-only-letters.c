char * reverseOnlyLetters(char * s){

    int sLen = strlen(s);
    
    int i=0, j=sLen-1; 
    
    while(i < j)
    {
        while (!(
                (s[i] >= 'a') && (s[i] <= 'z')  ||
                (s[i] >= 'A') && (s[i] <= 'Z')
              ))
        {
            i++;
            if(i >= sLen)
            {
                break;
            }
        }
        
        while (!(
                (s[j] >= 'a') && (s[j] <= 'z')  ||
                (s[j] >= 'A') && (s[j] <= 'Z')
              ))
        {
            j--;
            if(j < 0)
            {
                break;
            }
        }
        
        if (i < j)
        {
            s[i] ^= s[j];
            s[j] ^= s[i];
            s[i] ^= s[j];
            i++; j--;
        }
    }
    return s; 
}